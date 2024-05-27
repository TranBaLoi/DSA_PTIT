#include<bits/stdc++.h>
using namespace std;

bool chuaxet[1005];
vector<int> a[1005];

int truoc[1005];
int V, E, U, T;
void DFS(int u) // danh sach canh
{
    cout << u << " ";
    chuaxet[u] = true;
    for(int i : a[u])
    {
        if(!chuaxet[i])     DFS(i);
    }
}

queue<int> q;
void BFS(int u = U, int v = T)
{
    q.push(u);
    chuaxet[u] = true;
    while(!q.empty())
    {
        int fr = q.front();     q.pop();
        for(int i : a[fr])
        {
           if(!chuaxet[i])
           {
                chuaxet[i] = true;
                truoc[i] = fr;
                q.push(i);
           }
        }
    }
}

void solve(int u = U, int v = T)
{
    if(!chuaxet[v]) 
    {
        cout << -1 ;
        return;
    }
    vector<int> res;
    while(u != v)
    {
        res.push_back(v);
        v = truoc[v];
    }
    res.push_back(u);
    reverse(res.begin(), res.end());
    for(auto i : res)
        cout << i << " ";
}
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        cin >> V >> E >> U >> T;
        memset(chuaxet, false, sizeof(chuaxet));
        memset(a, {}, sizeof(a));
        int n, m;
        for(int i = 0; i < E; i++)
        {
            cin >> n >> m;
            a[n].push_back(m);
        }
        BFS();
        solve();
        cout << endl;
    }
    return 0;
}