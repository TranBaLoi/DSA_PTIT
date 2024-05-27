#include<bits/stdc++.h>
using namespace std;

bool chuaxet[1005];
vector<int> a[1005];
int V, E, U, T;
int truoc[1005];
void DFS(int u = U, int t = T) // danh sach canh
{
   if(chuaxet[u])   return;
   chuaxet[u] = true;
   for(int i : a[u])
   {
        if(!chuaxet[i])
        {
            truoc[i] = u;
            DFS(i, T);
        }
   }
}

void solve(int u = U, int t = T)
{
    if(!chuaxet[T])
    {
        cout << -1 ;
        return;
    }

    vector<int> v;
    while(u != t)
    {
        v.push_back(t);
        t = truoc[t];
    }
    v.push_back(u);
    reverse(v.begin(), v.end());
    for(auto i : v)
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
        DFS();
        solve();
        cout << endl;
    }
    return 0;
}