#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        int a[n];
        set<int> se;
        for(int i = 0; i < n; i++)
        {
            int x;  cin >> x;
            se.insert(x);
        }
        vector<int> v;
        for(auto x : se)    v.push_back(x);
        cout << v[v.size() - 1] - v[0] + 1 - v.size();
        cout << endl;
    }
}