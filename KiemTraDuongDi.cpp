#include<bits/stdc++.h>
using namespace std;

bool chuaxet[1005];
vector<int> a[1005];
int V, E, U, D;
void dfs(int u) // danh sach canh
{
    chuaxet[u] = true;
    for(int i : a[u])
    {
        if(!chuaxet[i])     dfs(i);
    }
}

void solve()
{
    memset(chuaxet, false, sizeof(chuaxet));
    dfs(U);
    if(!chuaxet[D])
        cout << "NO";
    else    cout << "YES";
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        memset(a, {}, sizeof(a));
        cin >> V >> E;
        for(int i = 0; i < E; i++)
        {
            int n, m;   cin >> n >> m;
            a[n].push_back(m);
            a[m].push_back(n);
        }
        int q;  cin >> q;
        while(q--)
        {
            cin >> U >> D;
            memset(chuaxet, false, sizeof(chuaxet));
            solve();
            cout << endl;
        }
    }
    return 0;
}

