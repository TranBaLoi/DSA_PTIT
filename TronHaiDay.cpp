#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n, m;  cin >> n >> m;
        int a[n], b[m];
        vector<int> v;
        for(int i = 0; i < n+m; i++)  
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(auto x : v) cout << x << " ";
        cout << endl;
    }
    return 0;
}