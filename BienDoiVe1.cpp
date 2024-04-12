#include<bits/stdc++.h>
using namespace std;

int n, cnt = 1e9;

void Try(int tmp = n, int res = 0)
{
    if(res >= cnt)  return;
    if(tmp == 1)
    {
        cnt = min(cnt, res);
        return;
    }
    if(tmp % 2 == 0)
    {
        Try(tmp / 2, res + 1);
    }
    if (tmp % 3 == 0)
    {
        Try(tmp / 3, res + 1);
    }
    Try(tmp - 1, res + 1);
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        cin >> n;
        cnt = 1e9;
        Try();
        cout << cnt << endl;
    }
}