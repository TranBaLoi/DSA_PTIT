#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n, m;  cin >> n >> m;
        int a[n], b[m];
        for(int i = 0; i < n; i++)  cin >> a[i];
        for(int i = 0; i < m; i++)  cin >> b[i];
        sort(a, a+n);
        sort(b, b+m);
        ll res = (ll) a[n-1] * b[0];
        cout << res << endl;
    }
    return 0;
}