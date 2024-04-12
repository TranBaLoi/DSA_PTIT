#include<bits/stdc++.h>
using namespace std;
int n, s, a[100];
int res;

void init()
{
    cin >> n >> s;
    for(int i = 0; i < n; i++)  cin >> a[i];
    sort(a, a+n, greater<int>());
    res = n - 1;
}

void Try(int i = 0, int sum = 0, int cnt = 0)
{
    if(cnt >= res)  return;
    if(sum == s)
    {
        res = min(res, cnt);
        return;
    }
    if(i == n)  return;
    if(sum + a[i] <= s)
        Try(i + 1, sum + a[i], cnt + 1);
    Try(i + 1, sum, cnt);
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        init();
        Try();
        if(res == n - 1)
            cout << -1;
        else 
            cout << res ;
        cout << endl;
    }
    return 0;
}