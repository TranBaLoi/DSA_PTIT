#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

ll Pow1(ll n)
{
   if(n == 0)   return 1;
   if(n == 1)   return 2;
   ll p = Pow1(n/2);
   if(n%2)  return 2 * p * p;
   return p * p;
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        ll n, k;   cin >> n >> k;
        ll len = (Pow1(n)) / 2;
        while(1)
        {
            if(n == 1)
            {
                cout << 'A';
                break;
            }
            if(k == len)
            {
                cout << (char)( 'A' + n - 1 );
                break;
            }
            if(k > len)
            {
                k = len - (k - len);
            }
            n--;
            len /= 2;
        }
        cout << endl;
    }
    return 0;
}