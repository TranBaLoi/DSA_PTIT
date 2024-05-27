#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;   cin >> n;
        vector<pair<int, int>>  v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i].first;
        }
        for(int i = 0; i < n; i++)
        {
            cin >> v[i].second;
        }
        sort(v.begin(), v.end());
        int dp[1005];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        int res = INT_MIN;
        for(int i = 1; i < n; i++)
        {
            dp[i] = 1;
            for(int j = 0; j < i; j++)
            {
                if(v[i].first >= v[j].second)
                    dp[i] = max(dp[i], dp[j] + 1);
            }
            res = max(res, dp[i]);
        }
        cout << res << endl;
    }
}