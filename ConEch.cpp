#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod = 1e9 + 7;
ll dp[100001];

int main()
{
	int t;	cin >> t;
	memset(dp, 0, sizeof(dp));
	dp[0] = dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for(int i = 4; i <= 51; i++)
	{
		for(int j = 1; j <= 3; j++)
		{
			dp[i] += dp[i-j];
		}
	}
	while(t--)
	{
		int n;	cin >> n;
		cout << dp[n] << endl;
	}
	return 0;
}
