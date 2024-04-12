#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        string s; cin >> s;
        string tmp(s.size(), '0');
        tmp[0] = s[0];
        for(int i = 1; i < s.size(); i++)
        {
            if(s[i] != s[i-1])  
                tmp[i] = '1';
            else    
                tmp[i] = '0';
        }
        cout << tmp << endl;
    }
    return 0;
}