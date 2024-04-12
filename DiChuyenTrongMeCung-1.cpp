#include<bits/stdc++.h>
using namespace std;

int a[100][100];
int ok = 0;
int n;

void backtrack(string s="", int x = 0, int y = 0)
{
    if(x==n || y==n)    return;
    if(a[x][y]==0)  return;
    if(x==n-1 && y==n-1)
    {
        cout << s << " ";
        ok = 1;
        return;
    }
    backtrack(s+"D",x+1,y);
    backtrack(s+"R",x,y+1);
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        cin >> n;
        ok = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)  a[i][j] = 0;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)  cin >> a[i][j];
        }
        backtrack();
        if(!ok) cout << -1;
        cout << endl;
    }
}