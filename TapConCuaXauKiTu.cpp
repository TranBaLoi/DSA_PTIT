#include<bits/stdc++.h>
using namespace std;

int n;
vector<string> res;
string s;


void Try(int i = 0, string ss = "")
{
    if(i == n)
    {
        res.push_back(ss);
        return;
    }
    Try(i + 1, ss);
    Try(i + 1, ss + s[i]);
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        cin >> n >> s;
        res.clear();
        Try();
        sort(res.begin(), res.end());
        res.erase(res.begin());
        for(auto x : res)   cout << x <<  " ";
        cout << endl;
    }
    return 0;
}