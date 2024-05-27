#include<bits/stdc++.h>
using namespace std;

bool chuaxet[1005];
vector<int> a[1005];
int V, E;
void dfs(int u) // danh sach canh
{
    chuaxet[u] = true;
    for(int i : a[u])
    {
        if(!chuaxet[i])     dfs(i);
    }
}

void bfs(int u) // danh sach canh
{

    queue<int> q;
    q.push(u);
    chuaxet[u] = true;
    while(!q.empty())
    {
        int fr = q.front(); q.pop();
        for(int x : a[fr])
        {
            if(!chuaxet[x])
            {
                chuaxet[x] = true;
                q.push(x);
            }
        }
    }
}


void solve()
{
    for(int i = 1; i <= V; i++)
    {
        int cnt = 0;
        memset(chuaxet, false, sizeof(chuaxet));
        chuaxet[i] = true;
        for(int j = 1; j <= V; j++)
        {
            if(!chuaxet[j])
            {
               dfs(j);
               cnt++;
            }
        }
        if(cnt >= 2)    cout << i << " ";
    }
}
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        cin >> V >> E;
        memset(a, {}, sizeof(a));
        for(int i = 0; i < E; i++)
        {
            int n, m;   cin >> n >> m;
            a[n].push_back(m);
            a[m].push_back(n);
        }
        solve();
        cout << endl;
    }
    return 0;
}

