#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        ll sum = 0, a[n+1];
        for(int i = 1 ; i <= n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        a[0] = 0;
        ll res = 0;
        int flag = -1;
        for(int i = 1; i <= n; i++)
        {
            res += a[i-1];
            if((sum - a[i]) % 2 )   continue;
            if(res == (sum - a[i]) / 2)
            {
                flag = i;
                break;
            }
        }
        cout << flag << endl;
    }
    return 0;
}