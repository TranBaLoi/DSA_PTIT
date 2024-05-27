#include<bits/stdc++.h>
using namespace std;

int dp[1005];
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		memset(dp, 0, sizeof(dp));
		int n;	cin >> n;
		int res = 0, a[n+1];
		for(int i = 1; i <= n; i++)	cin >> a[i];
		for(int i = 1; i <= n; i++)
		{
			dp[i] = 1;
			for(int j = 1; j < i; j++)
			{
				if(a[i] >= a[j])
					dp[i] = max(dp[i], dp[j] + 1);
			}
			res = max(res, dp[i]);
		}
		cout << n - res << endl;
	}
	return 0;
}
