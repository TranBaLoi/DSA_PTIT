#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        vector<ll> v(n);
        for(int i = 0; i < n; i++)  cin >> v[i];
        priority_queue<int, vector<int>, greater<int>>  pq;
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
           pq.push(v[i]);
        }
        while(pq.size() > 1)
        {
            ll top1 = pq.top(); pq.pop();
            top1 %= mod;
            ll top2 = pq.top(); pq.pop();
            top2 %= mod;
            sum += top1 + top2;
            ll top = top1 + top2;
            top %= mod;
            sum %= mod;
            pq.push(top);
        }
        cout << sum << endl;
    }
    return 0;
}