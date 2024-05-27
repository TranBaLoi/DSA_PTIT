#include<bits/stdc++.h>
using namespace std;

int dp1[105], dp2[105];

int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		int a[n+1];
		for(int i = 1; i <= n; i++)		cin >> a[i];
		memset(dp1, 0, sizeof(dp1));
		memset(dp2, 0, sizeof(dp2));
		for(int i = 1; i <= n; i++)
		{
			dp1[i] = a[i];
			for(int j = 1; j < i; j++)
			{
				if(a[i] > a[j])
				{
					dp1[i] = max(dp1[i], dp1[j] + a[i]);
				}
			}
		}
		for(int i = n; i >= 1; i--)
		{
			dp2[i] = a[i];
			for(int j = n; j > i; j--)
			{
				if(a[i] > a[j])
					dp2[i] = max(dp2[i], dp2[j] + a[i]);
			}
		}
		int res = -1e9;
		for(int i = 1; i <= n; i++)
		{
			res = max(res, dp1[i] + dp2[i] - a[i]);
		}
		cout << res << endl;
	}
}
