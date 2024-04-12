#include<bits/stdc++.h>
using namespace std;

void Gray_Binary(string s)
{
    string tmp(s.size(), '0');
    tmp[0] = s[0];
    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == '1')
        {
            if(tmp[i-1] == '0') tmp[i] = '1';
            else tmp[i] = '0';
        }
        else 
        {
            tmp[i] = tmp[i-1];
        }
    }
    cout << tmp;
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        string s;   cin >> s;
        Gray_Binary(s);
        cout << endl;
    }
}