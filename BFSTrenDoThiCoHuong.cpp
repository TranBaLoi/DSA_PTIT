#include<bits/stdc++.h>
using namespace std;

bool chuaxet[1005];
vector<int> a[1005];

int V, E, U;
void BFS() // danh sach canh
{

    queue<int> q;
    q.push(U);
    chuaxet[U] = true;
    while(!q.empty())
    {
        int fr = q.front(); q.pop();
        cout << fr << " ";
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
        }
        BFS();
        cout << endl;
    }
    return 0;
}