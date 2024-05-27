#include<bits/stdc++.h>
using namespace std;
using ll = long long;
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
            ll top2 = pq.top(); pq.pop();
            sum += top1 + top2;
            pq.push(top1 + top2);
        }
        cout << sum << endl;
    }
    return 0;
}