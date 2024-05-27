#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        string s;   cin >> s;
        stack<char> st1, st2;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
                st1.push(s[i]);
            if(s[i] == ')')
            {
                st2.push(s[i]);
                if(!st1.empty())
                {
                    st2.pop();
                    st1.pop();
                }
            }
        }
        if(st1.size() == st2.size())    
            cout << st1.size();
        else if(st1.size() == s.size() || st2.size() == s.size())
            cout << s.size() / 2 ;
        else if(st1.size() > 0 && st2.empty())
            cout <<  st1.size() / 2 ;
        else if(st1.empty() && st2.size() > 0)
            cout << st2.size() / 2;
        else
        {
            int n = st1.size() / 2;
            int m = st2.size() / 2;
            if(st1.size() % 2 != 0)
            {
                cout << n + m + st1.size() - 2*n + st2.size() - 2*m;
            }
            else
                cout << n + m;
        }
        cout << endl;
    }
}