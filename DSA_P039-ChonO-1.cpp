#include<bits/stdc++.h>
using namespace std;

int dp[25][25];

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        int a[n][n];
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++) cin >> a[i][j];
        }
        memset(dp, 0, sizeof(dp));
        
    }
}