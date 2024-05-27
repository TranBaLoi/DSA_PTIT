#include<bits/stdc++.h> 
using namespace std;


int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        vector<int> dp(n + 1);
        iota(dp.begin(), dp.end(), 0);
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j*j <= i; j++)
            {
                dp[i] = min(dp[i], dp[i-j*j] + 1);
            }
        }
        cout << dp[n] << endl;
    }
}