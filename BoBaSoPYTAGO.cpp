#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = a[i] * a[i];
        }
        sort(a, a+n, greater<ll>());
        bool flag = false;
        for(int i = 0; i < n-2; i++)
        {
            int l = i + 1;
            int r = n - 1;
            while(l < r)
            {
                if(a[l] + a[r] == a[i])
                {
                    flag = true;
                    break;
                }
                else if(a[l] + a[r] < a[i])
                    r--;
                else 
                    l++;
            }
        }
        if(flag)    cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}