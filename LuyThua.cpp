#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

int Pow(ll n, ll k)
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
        int n, k;   cin >> n >> k;
        cout << Pow(n, k) << endl;
    }
    return 0;
}