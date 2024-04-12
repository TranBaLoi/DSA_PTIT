#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n, k;  cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++)  cin >> a[i];
        sort(a, a+n);
        ll cnt = 0;
        bool flag = false;
        for(int i = 0; i < n - 2; i++)
        {
            int l = i + 1, r = n - 1;
            while(a[l] < a[r])
            {
                ll ans = (ll) a[i] + a[l] + a[r];
                if(ans == k)
                {
                    cout << "YES";
                    flag = true;
                    break;
                }
                else if(ans < k) l++;
                else r--;
            }
            if(flag) break;
        }
        if(!flag) cout <<  "NO" ;
        cout << endl;
    }
    return 0;
}