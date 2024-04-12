#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
   int t;   cin >> t;
   while(t--)
   {
        ll sum1 = 0, sum2 = 0;
        int n;  cin >> n;
        int a[n];
        for(auto &x : a)    cin >> x;
        sort(a,a+n);
        for(int i=0; i<n; i++)
        {
            if(i%2 == 0)    sum1 = sum1*10 +a[i] ;
            else sum2 = sum2 * 10 + a[i];
        }
        cout << sum1 + sum2 << endl;
   }
}