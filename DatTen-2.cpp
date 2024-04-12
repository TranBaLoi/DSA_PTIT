#include<bits/stdc++.h>
using namespace std;

int a[100] = {0};
vector<char> s;
int n, k;

void backtrack(int i = 1)
{
    for(int j = a[i-1]+1; j <= n-k+i; j++ )
    {
        a[i] = j;
        if(i==k)
        {
            for(int l=1;l<=k;l++)
            {
                cout << s[a[l]-1];
            }
            cout << endl;
        }
        else backtrack(i+1);
    }
}
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        s.clear();
        cin >> n >> k;
        for(int i=0;i<n;i++) 
        {
            char x = 'A' + i;
            s.push_back(x);
        }
        backtrack();
    }
    return 0;
}