#include<bits/stdc++.h>
using namespace std;

int n, k, s;
int a[100] = {0};

void reset()
{
    for(int i = 0; i <= n; i++) a[i] = 0;
}
int sum(int a[])
{
    int sum = 0;
    for(int i = 1; i <= k; i++) sum += a[i];
    if(sum == s)    return 1;
    return 0;   
}

int cnt = 0;

void Try(int i = 1)
{
    for(int j = a[i-1]+1; j <= n-k+i; j++)
    {
        a[i] = j;
        if(i == k)
        {
            if(sum(a))  cnt++;
        }
        else Try(i+1);
    }
}

int main()
{
    while(1)
    {
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0)  break;
        reset();
        Try();
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}