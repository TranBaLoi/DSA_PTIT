#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n, k;   cin >> n >> k;
        int a[k], b[k];
        set<int> se;
        for(int i = 1; i <= k; i++) 
        {
            cin >> a[i];
            b[i] = a[i];
            se.insert(a[i]);
        }
        int cnt = k;
        int i = k;
        while(i > 0 && a[i] >= n - k + i)   --i;
        if(i == 0) 
        {
            cout << cnt << endl;
            continue;
        }
        b[i] += 1;
        for(int j = i+1; j <= k; j++)   b[j] = b[i] + j - i;
        for(int i = 1; i <= k; i++) 
        {
            if(se.count(b[i]) != 0) cnt--;
        }
        cout << cnt;
        cout << endl;
    }
    return 0;
}