#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 123456789;

ll Pow(ll n, ll k)
{
   ll res = 1;
   while(k)
   {
        if(k%2==1)
        {
            res *= n;
            res %= mod;
        }
        k /= 2;
        n *= n;
        n %= mod;
   }
   return res;
}
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        ll n;   cin >> n;
        cout << Pow(2, n-1) << endl;
    }
    return 0;
}