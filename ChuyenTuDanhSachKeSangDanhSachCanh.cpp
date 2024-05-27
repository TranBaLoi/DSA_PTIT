#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin >> n;
    vector<vector<int>> a(n+1);
    int m = 1;
    while(m <= n)
    {
        scanf("\n");
        string s;   getline(cin, s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp)
        {
            a[m].push_back(stoi(tmp));
        }
        m++;
    }
    for(int i = 1; i <= n; i++)
    {
        for(auto j : a[i])
        {
            if(i < j)
              cout << i << " " << j << endl;
        }
    }
    return 0;
}