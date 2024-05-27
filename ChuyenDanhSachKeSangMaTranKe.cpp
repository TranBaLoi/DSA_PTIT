#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int main()
{
    int n;  cin >> n;
    int m = 1;
    memset(a, 0, sizeof(a));
    while(m <= n)
    {
        scanf("\n");
        string s;   getline(cin, s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp)
        {
            a[m][stoi(tmp)] = 1;
        }
        m++;
        
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}