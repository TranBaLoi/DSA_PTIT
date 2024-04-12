#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;  cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        int a[n], b[k];
        set<int>   s;
        for(int i=0;i<k;i++)    
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        int i = k-1;
        while(i>=0 && a[i] >= n-k+i+1) --i;
        if(i<0) cout << k << endl;
        else
        {
            a[i] += 1;
            for(int j=0;j<=i;j++)   b[j] = a[j];
            for(int j=i+1;j<k;j++)
            {
                b[j] = a[i] + j - i;
            }
            int cnt = 0;
            for(auto x : b)  
            {
                if(s.count(x) == 0) cnt++;
            }
            cout  << cnt << endl;

        }
        
    }
    return 0;
}