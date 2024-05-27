#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod = 1e9 + 7;

map<ll, ll> f;

ll fibo(ll n)
{
    if(f.find(n) != f.end())
        return f[n] % mod;
    if(n == 1 || n == 2)    return 1;
    return f[n] = (fibo((n - 1) / 2) * fibo(n / 2) % mod + fibo((n + 1) / 2) * fibo((n+2) / 2) % mod) % mod; 
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        f.clear();
        ll n;   cin >> n;
        cout << fibo(n) << endl;
    }
    return 0;
}