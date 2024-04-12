#include<bits/stdc++.h>
using namespace std;

int n, a[100], vs[100]={0};
int check(int a[])
{
    for(int i=1;i<n;i++)
    {
        if(abs(a[i]-a[i+1])==1) return 0;
    }
    return 1;
}

void backtrack(int i = 1)
{
    if(i>n)
    {
        if(check(a))
        {
            for(int j = 1; j <= n; j++)
            {
                cout << a[j];
            }
            cout << endl;
        }
    }
    for(int j = 1; j<=n; j++)
    {
        if(vs[j] == 0)
        {
            a[i] = j;
            vs[j] = 1;
            backtrack(i+1);
            vs[j] = 0;
        } 
    }
}
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        cin >> n;
        backtrack();
        cout << endl;
    }
    return 0;
}
