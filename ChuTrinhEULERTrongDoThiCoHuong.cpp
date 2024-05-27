#include<bits/stdc++.h>
using namespace std;

int indeg[1005], outdeg[1005];
int V, E;
vector<int> a[1005];

void solve()
{
    for(int i = 1; i <= V; i++)
    {
        outdeg[i] = a[i].size();
        for(int v : a[i])
            indeg[v]++;
    }

    bool flag = true;
    for(int i = 1; i <= V; i++)
    {
        if(indeg[i] != outdeg[i])
            flag = false;
    }
    if(flag)    cout << 1;
    else cout << 0;
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        memset(a, {}, sizeof(a));
        memset(indeg, 0, sizeof(indeg));
         memset(outdeg, 0, sizeof(outdeg));
        cin >> V >> E;
        for(int i = 0; i < E; i++)
        {
            int n, m;   cin >> n >> m;
            a[n].push_back(m);
        }
        for(int i = 1; i <= V; i++)
        {
            sort(a[i].begin(), a[i].end());
        }
        solve();
        cout << endl;
    }
    return 0;
}