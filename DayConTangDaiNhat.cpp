#include<bits/stdc++.h>
using namespace std;

int dp[1005];
int main()
{
    int n;  cin >> n;
    int a[n], res = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= n; i++)
    {
        dp[i] = 1;
        for(int j = 1; j < i; j++)
        {
            if(a[i] > a[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
        res = max(res, dp[i]);
    }
    cout << res;
    return 0;
}