#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n, sum = 0; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)  
        {
            cin >> a[i];
            sum += a[i];
        }
        if(sum & 1) 
        {
            cout << "NO" << endl;
            continue;
        }
        sum /= 2;
        vector<bool> dp(sum + 1, false);
        dp[0] = true;
        for(int i = 0; i < n; i++)
        {
            for(int j = sum; j >= a[i]; j--)
            {
                if(dp[j - a[i]] == true)
                    dp[j] = true;
            }
        }
        if(dp[sum]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}