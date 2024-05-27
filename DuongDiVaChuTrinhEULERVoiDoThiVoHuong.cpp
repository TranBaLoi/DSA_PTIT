#include<bits/stdc++.h>
using namespace std;

int deg[1005];
int V, E;
vector<int> a[1005];

void solve()
{
    bool flag1 = true;
    bool flag2 = true;
    int cnt = 0;
    for(int i = 1; i <= V; i++)
    {
        deg[i] = a[i].size();
        if(deg[i] % 2 == 1)
        {
            flag2 = false;
            cnt++;
        }
    }

    if(cnt != 0 && cnt != 2)    flag1 = false;
    if(flag2)   cout << 2;
    else if(flag1)  cout << 1;
    else cout << 0;
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        memset(a, {}, sizeof(a));
        memset(deg, 0, sizeof(deg));
        cin >> V >> E;
        for(int i = 0; i < E; i++)
        {
            int n, m;   cin >> n >> m;
            a[n].push_back(m);
            a[m].push_back(n);
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