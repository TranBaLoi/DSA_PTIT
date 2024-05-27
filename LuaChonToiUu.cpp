#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.second == b.second)   
        return a.first < b.first;
    else return a.second < b.second;
}
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        vector<pair<int,int>> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i]. first >> v[i].second;
        }
        sort(v.begin(), v.end(), cmp);
        int res = 0;
        for(int i = 0; i < n; i++)
        {
            int end = v[i].second;
            while(i < n && v[i].first < end)
            {
                i++;
            }
            --i;
            res++;
        }
        cout << res << endl;
    }
    return 0;
}