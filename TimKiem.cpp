#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n, k;  cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++)  cin >> a[i];
        int mid = n / 2;
        int ok = 0;
        if(k >= a[mid])
        {
            for(int i = mid; i < n; i++)
            {
                if(k == a[i]) 
                {
                    ok = 1;
                    cout << 1;
                    break;
                }
            }
        }
        else
        {
            for(int i = 0; i < mid; i++)
            {
                if(k == a[i])
                {
                    ok = 1;
                    cout << 1;
                    break;
                }
            }
        }
        if(!ok) cout << -1;
        cout << endl;
    }
}