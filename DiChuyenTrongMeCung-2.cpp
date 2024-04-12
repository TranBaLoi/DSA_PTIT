#include<bits/stdc++.h>
using namespace std;

int a[100][100], n;
bool ok[100][100];
vector<string>  v;

void init()
{
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= n; j++) ok[i][j] = false;
    }
    v.clear();
}

void Try(int x = 1, int y = 1, string s = "")
{
    if(a[1][1] == 0 || a[n][n] == 0)    return;
    if(x == n && y == n)
    {
        v.push_back(s);
        return;
    }
    if(a[x+1][y] && x != n && !ok[x+1][y])
    {
        ok[x][y] = true;
        Try(x+1, y, s + "D");
        ok[x][y] = false;
    }
    if(a[x][y+1] && y != n && !ok[x][y+1])
    {
        ok[x][y] = true;
        Try(x, y+1, s + "R");
        ok[x][y] = false;
    }
    if(a[x][y-1] && y != 1 && !ok[x][y-1])
    {
        ok[x][y] = true;
        Try(x, y-1, s + "L");
        ok[x][y] = false;
    }
    if(a[x-1][y] && x != 1 && !ok[x-1][y])
    {
        ok[x][y] = true;
        Try(x-1, y, s + "U");
        ok[x][y] = false;
    }
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
                cin >> a[i][j];
        }
        init();
        Try();
        if(v.size() == 0)   cout << -1;
        else
        {
            sort(v.begin(), v.end());
            for(auto x : v) cout << x << " ";
        }
        cout << endl;
    }
}