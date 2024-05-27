#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        ll n;   cin >> n;
        queue<string> q;
        q.push("1");
        while(stoll(q.front()) % n != 0)
        {
            string fr = q.front();
            q.pop();
            q.push(fr + "0");
            q.push(fr + "1");
        }
        cout << q.front() << endl;
    }
    return 0;
}