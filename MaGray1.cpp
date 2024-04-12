#include<bits/stdc++.h>
using namespace std;

int n;

void Try(string s = "", int i = 0)
{
    if(i == n)
    {
        string tmp(n, '0');
        tmp[0] = s[0];
        for(int i = n-1; i >= 1; i--)
        {
            if(s[i] != s[i-1])
            {
                tmp[i] = '1';
            }
            else tmp[i] = '0';
        }
        cout << tmp << " ";
        return;
    }
    Try(s + '0', i + 1);
    Try(s + '1', i + 1);
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        cin >> n;
        Try();
        cout << endl;
    }
    return 0;
}