#include<bits/stdc++.h>
using namespace std;

int dp[40005];

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int x, n, s;    cin >> n >> s;
        memset(dp, 0, sizeof(dp));
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            dp[x] = 1;
            for(int j = s; j >= x; j--)
            {
                if(dp[j-x] == 1)    dp[j] = 1;
            }
        }
        if(dp[s])   cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}