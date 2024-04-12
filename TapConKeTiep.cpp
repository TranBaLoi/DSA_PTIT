#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n, k;   cin >> n >> k;
        int a[k+1];
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        int i = k-1;
        while(i>=0 && a[i] >= n-k+i+1)   --i;
        if(i<0)
        {
            for(int j=0;j<k;j++)
            {
                cout << j+1 << " ";
            }
            cout << endl;
            break;
        }
        else{
            a[i] = a[i]+1;
            for(int j=i+1;j<k;j++)
            {
                a[j] = a[i]+j-i;
            }
            for(int j=0;j<k;j++)
            {
                cout << a[j] << " ";
            }
            cout << endl;
        }
    }
}