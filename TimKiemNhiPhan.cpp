#include<bits/stdc++.h>
using namespace std;

int binary_search(int a[], int n, int k)
{
    int l = 0, r = n - 1;
    while(l <= r)
    {
        if(a[(l + r) / 2] == k) return (l + r) / 2;
        else if(a[(l + r) / 2] < k)
        {
            l = (l + r) / 2 + 1;
        }
        else
            r = (l + r) / 2 - 1;
    }
    return -1;
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n, k;   cin >> n >> k;
        int a[n];
        for(auto &x : a)    cin >> x;
        if(binary_search(a, n, k) != -1)
            cout << binary_search(a, n, k) + 1 << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}