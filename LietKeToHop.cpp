#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], b[100];

void backtrack(int i = 1)
{
    for(int j=b[i-1]+1;j<=n-k+i;j++)
    {
        b[i] = j;
        if(i == k)
        {
            for(int l=1; l<=k; l++)
            {
                cout <<a[b[l]] << " ";
            }
            cout << endl;

        }
        else backtrack(i+1);
    }
}
int main()
{
    cin >> n >> k;
    set<int> s;
    int m;
    for (int i = 0; i < n; i++)
    {
        int x;  cin >> x;
        s.insert(x);
    }
    
    m = 1;
    for(auto x : s)
    {
        a[m] = x;
        m++;
    }
    n = s.size();
    backtrack();
    return 0;
}