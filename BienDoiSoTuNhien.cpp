#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        queue<pair<int, int>> q;
        q.push({n, 0});
        set<int> s;
        while(!q.empty())
        {
            auto fr = q.front();    q.pop();
            if(fr.first == 1)
            {
                cout << fr.second << endl;
                break;
            }
            for(int i = 2; i <= sqrt(fr.first); i++)
            {
                if(fr.first % i == 0 && s.find(fr.first / i) == s.end())
                {
                    s.insert(fr.first / i);
                    q.push({fr.first / i, fr.second + 1});
                }
            }
            if(s.find(fr.first - 1) == s.end())
               { s.insert(fr.first - 1);
                 q.push({fr.first - 1, fr.second + 1});}
        }
    }
    return 0;
}