#include<bits/stdc++.h>
using namespace std;

int a[100][100], n , m;
int cnt = 0;

void backtrack(int x = 0, int y = 0)
{
    if(x == n || y == m)    return;
    if(x == n-1 && y == m-1)    
    {
        ++cnt;
        return;
    }
    backtrack(x+1,y);
    backtrack(x,y+1);
}

int main()
{
    int t;  cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cnt = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++) a[i][j] = 0;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)  cin >> a[i][j];
        }
        backtrack();
        cout << cnt << endl;
    }
    
}