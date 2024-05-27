#include<bits/stdc++.h>
using namespace std;

bool dp[1005][1005];
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		string s;	cin >> s;
		int n = s.size(), res = 1;
		s = "X" + s;
		memset(dp, false, sizeof(dp));
		for(int i = 1; i <= n; i++)	dp[i][i] = true;
		for(int len = 2; len <= n; len++)
		{
			for(int i = 1; i <= n-len+1; i++)
			{
				int j = i + len - 1;
				if(len == 2 && s[i] == s[j])
					dp[i][j] = true;
				else if(s[i] == s[j] && dp[i+1][j-1])
					dp[i][j] = true;
			
				if(dp[i][j])	res = max(res, len);
			}
		}
		cout << res << endl;
	}
	return 0;
}
