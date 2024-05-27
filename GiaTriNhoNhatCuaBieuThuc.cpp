#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod = 1e9 + 7;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        ll n;   cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
        for(int i = 0; i < n; i++)  cin >> a[i];
        for(int i = 0; i < n; i++)  cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<ll>());
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += a[i] * b[i];
        }
        cout << sum << endl;
    }
    return 0;
}