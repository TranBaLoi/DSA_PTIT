#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		ll dp[n+5];
		dp[0] = 1;
		int i2 = 0, i3 = 0, i5 = 0;
		for(int i = 1; i < n; i++)
		{
			dp[i] = min(dp[i2]*2, min(dp[i3]*3, dp[i5]*5));
			if(dp[i] == dp[i2] * 2)
				i2++;
			if(dp[i] == dp[i3] * 3)
				i3++;
			if(dp[i] == dp[i5] * 5)
				i5++;
		}
		cout << dp[n-1];
		cout << endl;
	}
}
