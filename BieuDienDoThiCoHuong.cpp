#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n, m;   cin >> n >> m;
        vector<string> v(n+1);
        for(int i = 1; i <= n; i++)
        {
            string s = to_string(i);
            s += ": ";
            v[i] = s;
        }
        while(m--)
        {
            int tmp1, tmp2; cin >> tmp1 >> tmp2;
            v[tmp1] += to_string(tmp2) + " ";
        }
        for(auto x : v)
        {
            cout << x << endl;
        }
    }
    return 0;
}