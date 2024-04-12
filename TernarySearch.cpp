#include <bits/stdc++.h>
using namespace std;
 
// Function to perform Ternary Search
int ternarySearch(int l, int r, int key, int ar[])
{
    if (r >= l) {
 
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
        if (ar[mid1] == key) {
            return mid1;
        }
        if (ar[mid2] == key) {
            return mid2;
        }
        if (key < ar[mid1]) {
 
            return ternarySearch(l, mid1 - 1, key, ar);
        }
        else if (key > ar[mid2]) {
 
            return ternarySearch(mid2 + 1, r, key, ar);
        }
        else {
 
            return ternarySearch(mid1 + 1, mid2 - 1, key, ar);
        }
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
            int m = ternarySearch(0, n-1, a[i], b);
            if(m != -1)
            {
                if(b[m] == b[m+1] || b[m] == b[m-1]) 
                {cout << b[m] << endl;
                ok = 1;}
            }
            if(ok)  break;
        }
        if(!ok) cout << "NO" << endl;
    }
}