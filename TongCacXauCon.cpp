#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        string s;   cin >> s;
        ll res = 0;
        for(int i = 0; i < s.size(); i++)
        {
            string tmp = "";
            for(int j = i; j < s.size(); j++)
            {
                tmp += s[j];
                res += stoll(tmp);
            }
        }
        cout << res << endl;
    }
    return 0;
}