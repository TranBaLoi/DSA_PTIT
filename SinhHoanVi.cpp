#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        int a[n];
        for(int i=1;i<=n;i++)   a[i] = i;
        while(1)
        {
            for(int i=1;i<=n;i++)   cout << a[i];
            cout << " ";
            int i = n-1;
            while(i>0 && a[i] > a[i+1]) --i;
            if(i==0)    break;
            else
            {
                int k = n;
                while(a[k] < a[i])  k--;
                swap(a[k], a[i]);
                int l = i+1, r = n;
                while(l<r)
                {
                    swap(a[l],a[r]);
                    l++; r--;
                }
            } 
        }
        cout << endl;
    }
}