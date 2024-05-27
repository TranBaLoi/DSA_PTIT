#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll dp[1005][1005];
const ll mod = 1e9 + 7;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n, k;	cin >> n >> k;
		ll tmp = 1;
		for(int i = 2; i <= k; i++)
		{
			tmp *= i;
			tmp %= mod;
		}
		for(int i = 0; i <= n; i++)
		{
			for(int j = 0; j <= n; j++)
			{
				dp[i][j] = 1;
			}
		}
		for(int i = 2; i <= n; i++)
		{
			for(int j = 1; j < i; j++)
			{
				dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
				dp[i][j] %= mod;
			}
		}
		cout << (dp[n][k] * tmp) % mod << endl;
	}
}
