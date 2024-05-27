#include<bits/stdc++.h>
using namespace std;

bool chuaxet[1005];
vector<int> a[1005];
int V, E, U;
void DFS(int u = U) // danh sach canh
{
    cout << u << " ";
    chuaxet[u] = true;
    for(int i : a[u])
    {
        if(!chuaxet[i])     DFS(i);
    }
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        cin >> V >> E >> U;
        memset(chuaxet, false, sizeof(chuaxet));
        memset(a, {}, sizeof(a));
        int n, m;
        for(int i = 0; i < E; i++)
        {
            cin >> n >> m;
            a[n].push_back(m);
            a[m].push_back(n);
        }
        DFS();
        cout << endl;
    }
    return 0;
}