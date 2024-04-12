#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll l, r;
void Flag(ll a[], ll x, ll n)
{
    ll tmp = n / 2;
    if(a[tmp] >= x)
    {
        l = 0;
        r = tmp;
    }   
    else 
    {
        l = tmp;
        r = n - 1; 
    }
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        ll n, x; cin >> n >> x;
        ll a[n];
        for(auto &i : a)    cin >> i;
        Flag(a, x, n);
        int ok = 0;
        while(a[r] > x && r >= l) --r;
        if(a[r] > x)    ok = 1;
        if(ok) cout << -1 << endl;
        else
            cout << r + 1 << endl;
    }
    return 0;
}