#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll l, r;
void Flag(ll a[], ll b[], ll n)
{
    ll tmp = n / 2;
    if(a[tmp] != b[tmp])
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
        ll n; cin >> n;
        ll a[n], b[n-1];
        for(auto &i : a)    cin >> i;
        for(auto &i : b)    cin >> i;
        Flag(a, b, n);
        for(int i = l; i <= r; i++)
        {
            if(a[i] != b[i])   
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}