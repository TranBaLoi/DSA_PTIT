#include<bits/stdc++.h>
using namespace std;

int dp[105][105][105];

int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int x, y, z;	cin >> x >> y >> z;
		string s1, s2, s3;	cin >> s1 >> s2 >> s3;
		s1 = "x" + s1;
		s2 = "x" + s2;
		s3 = "x" + s3;
		memset(dp, 0, sizeof(dp));
		for(int i = 1; i <= x; i++)
		{
			for(int j = 1; j <= y; j++)
			{
				for(int k = 1; k <= z; k++)
				{
					if(s1[i] == s2[j] && s2[j] == s3[k])
						dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
					else
						dp[i][j][k] = max(dp[i-1][j][k], max(dp[i][j-1][k], dp[i][j][k-1]));	
				}
			}
		}
		cout << dp[x][y][z] << endl;
	}
	return 0;
}
