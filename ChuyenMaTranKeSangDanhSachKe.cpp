#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    int a[t+1][t+1];
    vector<int> v[1005];
    for(int i = 1; i <= t; i++)
    {
        for(int j = 1; j <= t; j++) 
        {
            cin >> a[i][j];
            if(a[i][j] == 1)    v[i].push_back(j);
        }
    }
    for(int i = 1; i <= t; i++)
    {
        for(int x : v[i])   cout << x << " ";
        cout << endl;
    }
    return 0;
}