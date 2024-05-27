#include<bits/stdc++.h>
using namespace std;

bool check(string s)
{
    if(s == "0")    return false;
    bool visit[10];
    memset(visit, false, sizeof(visit));
    if(s.size() == 1)    return true;
    for(int i = 0; i < s.size(); i++)
    {
        if(!visit[s[i] - '0'])
            visit[s[i] - '0'] = true;
        else return false;
    }
    return true;
}
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int l, r;   cin >> l >> r;
        if(l > r)   swap(l, r);
        priority_queue<string> q;
        for(int i = 0; i <= 5; i++)
            q.push(to_string(i));
        while(!q.empty())
        {
            
        }
    }
}