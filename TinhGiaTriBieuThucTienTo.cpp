#include<bits/stdc++.h>
using namespace std;

bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        string s;   cin >> s;
        stack<int> st;
        reverse(s.begin(), s.end());
        for(auto c : s)
        {
            if(isOperator(c))
            {
                int op1 = st.top(); st.pop();
                int op2 = st.top(); st.pop();
                int res;
                if(c == '+')
                    res = op1 + op2;
                else if(c == '-')
                    res = op1 - op2;
                else if(c == '*')
                    res = op1 * op2;
                else if(c == '/')
                    res = op1 / op2;
                st.push(res);
            }
            else
                st.push(c - '0');
        }
        cout << st.top() << endl;
    }
    return 0;
}