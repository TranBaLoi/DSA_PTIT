#include<bits/stdc++.h>
using namespace std;

void hieu(int a[], int n, int k)
{
    int sum1 = 0, sum2 = 0;
    for(int i=0; i<n; i++)
    {
        if(i < k)  sum1 += a[i];
        else sum2 += a[i];
    }
    cout << sum2 - sum1 ;
}

int main()
{
   int t;   cin >> t;
   while(t--)
   {
        int n, k;  cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++)   cin >> a[i];
        sort(a,a+n);
        if(k <= n-k)    hieu(a,n,k);
        else hieu(a,n,n-k);
        cout << endl;
   }
}