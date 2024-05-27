#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        vector<string> res;
        queue<string> q;
        q.push("6");
        q.push("8");
        while(q.front().size() <= n)
        {
            string fr = q.front();
            res.push_back(fr);
            q.pop();
            q.push(fr + "6");
            q.push(fr + "8");
        }
        cout << res.size() << endl;
        for(auto x : res)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}