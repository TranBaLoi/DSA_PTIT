#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod = 1e9 + 7;

ll dp[1005];

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n, k;   cin >> n >> k;
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        int a[n];
        for(int i = 0; i < n; i++)  cin >> a[i];
        for(int i = 1; i <= k; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i - a[j] >= 0)
                {
                    dp[i] += dp[i - a[j]];
                    dp[i] %= mod;
                }
            }
        }
        cout << dp[k] << endl;
    }
}