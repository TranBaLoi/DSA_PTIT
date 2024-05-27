#include<bits/stdc++.h>
using namespace std;

int chuaxet[1005];
vector<int> a[1005];
bool flag;
int V, E;
void dfs(int u = 1, int p = 0, vector<int> res = {1}) // danh sach canh
{
    chuaxet[u] = 1;
    for(int i : a[u])
    {
        if(flag) return;
        if(chuaxet[i] == 0)
        {
            res.push_back(i);
            dfs(i, u, res);
            res.pop_back();
        }
        else if(chuaxet[i] == 1 && i != p)
        {
            if(i == 1)
            {
                flag = true;
                res.push_back(1);
                for(int v : res)
                    cout << v << " ";
            }
        }
    }
    chuaxet[u] = 2;
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


// void solve()
// {
//     dfs();
//     if(truoc[1] == 0)
//     {
//         cout << "NO";
//         return;
//     }
//     vector<int> res;
//     int tmp = 1;
//     while(truoc[tmp] != 1)
//     {
//         res.push_back(tmp);
//         tmp = truoc[tmp];
//     }
//     res.push_back(1);
//     reverse(res.begin(), res.end());
//     for(auto i : res)
//         cout << i << " ";
// }
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        flag = false;
        cin >> V >> E;
        memset(a, {}, sizeof(a));
        memset(chuaxet, 0, sizeof(chuaxet));
        for(int i = 0; i < E; i++)
        {
            int n, m;   cin >> n >> m;
            a[n].push_back(m);
            a[m].push_back(n);
        }
        for(int i = 1; i <= V; ++i){
			sort(a[i].begin(), a[i].end());
		}
        dfs();
        if(!flag)   cout << "NO";
        cout << endl;
    }
    return 0;
}

