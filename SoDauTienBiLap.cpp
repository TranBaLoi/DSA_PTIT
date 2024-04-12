#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;
 
        else
            r = m - 1;
    }
 
    return -1;
}
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n ;i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b+n);
        int ok = 0;
        for(int i = 0; i < n; i++)
        {
            int m = binarySearch(b, 0, n-1, a[i]);
            if(m != -1)
            {
                if(b[m] == b[m+1] || b[m] == b[m-1]) 
                {
                    cout << b[m] << endl;
                    ok = 1;
                }
            }
            if(ok)  break;
        }
        if(!ok) cout << "NO" << endl;
    }
}

// do phuc tap : O(n.log(n)).