#include<bits/stdc++.h>
using namespace std;
int n, a[100], vs[100], b[100];

void backtrack(int i = 1)
{
    if(i > n)
    {
        for(int j = 1; j<=n; j++)     cout << a[b[j]] << " ";
        cout << endl;
        return;
    }
    else{
        for(int j=1; j<=n; j++)
        {
            if(vs[j]==0)
            {
                b[i] = j;
                vs[j] = 1;
                backtrack(i+1);
                vs[j] = 0;
            }
        }
    }
}
int main()
{
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
    sort(a+1,a+n+1);
    backtrack();
    return 0;
}