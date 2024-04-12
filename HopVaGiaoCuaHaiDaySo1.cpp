#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while (t--)
    {
        int n, m;   cin >> n >> m;
        int a[n], b[m];
        vector<int> v;
        set<int> se;
        for(auto &x : a) 
        {
            cin >> x;
            se.insert(x);
        }
        for(auto &x : b) 
        {
            cin >> x;
        }
        sort(b, b+m);
        for(auto x : b) 
        {
            if(se.count(x)) v.push_back(x);
            se.insert(x); 
        }
        for(auto x : se)    cout << x << " ";
        cout << endl; 
        for(auto x : v) cout << x << " ";
        cout << endl;
    }
    
}