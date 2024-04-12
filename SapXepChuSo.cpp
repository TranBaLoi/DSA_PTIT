#include<bits/stdc++.h>
using namespace std;
using ll = long long;

set<char> se;
void Tach(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        se.insert(s[i]);
    }
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n; cin >> n;
        for(int i = 0; i<n; i++)
        {
            string s;   cin >> s;
            Tach(s);
        }

        for(auto i : se) cout << i << " ";
        cout << endl;
        se.clear();
    }
    return 0;
}