#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        int a[n];
        map<int, int>   mp;
        for(int i = 0; i < n; i++)
        {
            int x;  cin >> x;
            mp[x]++;
        }
        vector<int> v;
        for(auto x : mp)
        {
            v.push_back(x.second);
        }
        sort(v.begin(), v.end(), greater<int>());
        for(auto x : v)
        {
            for(auto i : mp)
            {
                if(x == i.second)
                {
                    while(i.second--)
                    {
                        cout << i.first << " ";
                    }
                    mp.erase(i.first);
                    break;
                }
            }
        }
        cout << endl;
    }
}