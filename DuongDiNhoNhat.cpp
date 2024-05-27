#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n, m;   cin >> n >> m;
        int a[n+1][m+1];
        int dp[n+1][m+1];
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++) cin >> a[i][j];
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(i==1 && j == 1)  dp[i][j] = a[i][j];
                else if(i == 1)
                    dp[i][j] = a[i][j] + dp[i][j-1];
                else if(j == 1)
                    dp[i][j] = a[i][j] + dp[i-1][j];
                else    
                    dp[i][j] = a[i][j] + min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]));
            }
        }
        cout << dp[n][m] << endl;
    }
}