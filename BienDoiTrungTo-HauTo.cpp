#include<bits/stdc++.h>
using namespace std;
int priority(char c)
{
    if(c == '+' || c == '-')    return 1;
    if(c == '*' || c == '/')    return 2;
    if(c == '^')    return 3;
    return -1;
}

bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        string s, out = "";   cin >> s;
        stack<char> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(') 
                st.push(s[i]);
            else if(s[i] == ')')
            {
                while(!st.empty() && st.top() != '(')
                {
                    out += st.top();
                    st.pop();
                }
                st.pop();
            }
            else if(isOperator(s[i]))
            {
                while (!st.empty() && priority(s[i]) <= priority(st.top())) 
                {
                    out += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            else
                out += s[i];
        }
        while(!st.empty())
        {
            char top = st.top();
            if(isOperator(top))
                out += top;
            st.pop();
        }
        cout << out << endl;
    }
    return 0;
}