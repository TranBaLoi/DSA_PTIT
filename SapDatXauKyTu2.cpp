#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;
        string s;   cin >> n >> s;
        map<char, int> mp;
        int ok = 0;
        for(int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        for(auto x : mp)
        {
            if(x.second > (s.size() + 1) / n)   
            {
                ok = 1;
            }
        }
        if(!ok) cout << 1 << endl;
        else cout << -1 << endl;
    }
}