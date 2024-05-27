#include<bits/stdc++.h>
using namespace std;

int dx[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
int dy[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		scanf("\n");
		string s1, s2;	cin >> s1 >> s2;
		queue<pair<string, int>> q;
		q.push({s1, 0});
		while(!q.empty())
		{
			auto fr = q.front();
			q.pop();
			if(fr.first == s2)
			{
				cout << fr.second << endl;
				break;
			}
			for(int i = 0; i < 8; i++)
			{
				auto x = fr.first[0] + dx[i];
				auto y = fr.first[1] + dy[i];
				if(x >= 'a' && x <= 'h' && y >= '1' && y <= '8')
				{
					q.push({string(1,x) + string(1, y), fr.second + 1});
				}
			}
		}
	}
	return 0;
}