#include<bits/stdc++.h>
using namespace std;

int dp[45];

int main()
{
	int t;	cin >> t;
	while(t--)
	{
		string s;	cin >> s;
		int n = s.size();
		s = "x" + s;
		memset(dp, 0, sizeof(dp));
		if(s[1] == '0')
		{
			cout << 0 << endl;
			continue;
		}
		dp[0] = dp[1] = 1;
		for(int i = 2; i <= n; i++)
		{
			if(s[i] > '0')
				dp[i] = dp[i-1];
			if(s[i-1] == '1' || (s[i-1] == '2' && s[i] < '7'))
				dp[i] += dp[i-2];
		}
		cout << dp[n] << endl;
	}
	return 0;
}
