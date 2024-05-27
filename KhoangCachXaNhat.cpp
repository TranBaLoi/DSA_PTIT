#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int, int> b)
{
    return a.first < b.first;
}
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        int res = -1e9;
        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++)
        {
            int tmp;    cin >> tmp;
            v.push_back({tmp, i});
        }
        sort(v.begin(), v.end(), cmp);
        int ans = v[0].second;
        for(int i = 1; i < n; i++)
        {
            if(v[i].second - ans > res)
                res = v[i].second - ans;
            ans = min(ans, v[i].second);
        }
        cout << res;
        cout << endl;
    }
    return 0;
}