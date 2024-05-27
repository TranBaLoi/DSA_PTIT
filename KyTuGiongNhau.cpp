#include<bits/stdc++.h>
using namespace std;
int dp[1005];
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n, x, y, z; cin >> n >> x >> y >> z;
        memset(dp, 0, sizeof(dp));
        dp[0] = 0;
        dp[1] = x;
        for(int i = 2; i <= n; i++)
        {
            if(i % 2)   
                dp[i] = min(dp[i-1]+x, dp[(i+1)/2]+y+z);
            else
                dp[i] = min(dp[i-1]+x, dp[i/2]+z);
        }
        cout << dp[n] << endl;
    }
}