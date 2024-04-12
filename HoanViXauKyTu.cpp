#include<bits/stdc++.h>
using namespace std;

string s;
int a[100], vs[100]={0};
int n;
void backtrack(int i = 1)
{
    if(i > n)
    {
        for(int j = 1; j<=n; j++)
        {
            cout << s[a[j]-1];
        }
        cout << " ";
        return;
    }
    else
    {
        for(int j = 1; j <= n; j++)
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
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        string ss;  cin >> ss;
        s = ss;
        n = ss.size();
        backtrack();
        cout << endl;
    }
    return 0;
}