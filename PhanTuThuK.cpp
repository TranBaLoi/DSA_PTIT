#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        ll n, m, k;    cin >> n >> m >> k;
        ll a[n], b[m];
        vector<ll> v;
        for(auto &i : a)
        {
            cin >> i;
            v.push_back(i);
        }
        for(auto &i : b)
        {
            cin >> i;
            v.push_back(i);
        }
        sort(v.begin(), v.end());
        cout << v[k-1] << endl;
    }
}