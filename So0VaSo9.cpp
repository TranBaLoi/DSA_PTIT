#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        queue<string>   q;
        q.push("9");
        while(stoll(q.front()) % n != 0)
        {
            string tmp = q.front(); q.pop();
            q.push(tmp + "0");
            q.push(tmp + "9");
        }
        cout << q.front() << endl;
    }
    return 0;
}