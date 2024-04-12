#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        int a[n];
        for(auto &x : a)    cin >> x;
        int l = 0, r = n - 1;
        int mid = (r + l) / 2;
        if(a[r] == 0)   
        {
            cout << n << endl;
            continue;
        }
        if(a[l] == 1)
        {
            cout << 0 << endl;
            continue;
        }
        while(a[mid] == 0)
        {
            l = mid;
            r = n - 1;
            mid = (r + l) / 2;
        }
        r = mid;
        for(int i = l; i <= r; i++)
        {
            if(a[i] == 1)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}