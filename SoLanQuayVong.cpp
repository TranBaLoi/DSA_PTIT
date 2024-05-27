#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b.begin(), b.end());
        auto it = find(b.begin(), b.end(), a[n-1]);
        cout << n - (it - b.begin()) - 1 << endl;
    }
}