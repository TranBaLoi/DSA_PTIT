#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod = 1e9 + 7;

ll pow(ll a, ll b)
{
    ll res = 1;
    while(b)
    {
        if(b % 2)
        {
            res *= a;
            res %= mod;
        }
        b /= 2;
        a *= a;
        a %= mod;
    }
    return res;
}

int main()
{
    ll a, b;
    while(1)
    {
        cin >> a >> b;
        if(!a && !b)    break;
        cout << pow(a,b) << endl;
    }
}