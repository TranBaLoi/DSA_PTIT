#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n, m;	cin >> n >> m;
		int a[n+1][m+1];
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= m; j++)	cin >> a[i][j];
		}
		bool visit[n+1][m+1];
		memset(visit, false, sizeof(visit));
		queue<pair<pair<int,int>, int>> q;
		q.push({{1, 1}, 0});
		visit[1][1] = true;
		int res = -1;
		while(!q.empty())
		{
			auto fr = q.front();
			q.pop();
			int x = fr.first.first;
			int y = fr.first.second;
			if(x == n && y == m)
			{
				res = fr.second;
				break;
			}
			int x1 = x + a[x][y];
			int y1 = y + a[x][y];
			if(x1 <= n && x1 != x && !visit[x1][y])
			{
				visit[x1][y] = true;
				q.push({{x1, y}, fr.second + 1});
			}
			if(y1 <= m && y1 != y && !visit[x][y1])
			{
				visit[x][y1] = true;
				q.push({{x, y1}, fr.second + 1});
			}
		}
		cout << res << endl;
	}
}