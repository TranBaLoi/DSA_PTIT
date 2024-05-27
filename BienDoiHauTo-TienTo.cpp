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
        stack<string> st;
        for(auto c : s)
        {
            if(isOperator(c))
            {
                string op1 = st.top();  st.pop();
                string op2 = st.top();  st.pop();
                string tmp = string(1,c) + op2 + op1;
                st.push(tmp);
            }
            else    
                st.push(string(1, c));
        }
        cout << st.top() << endl;
    }
    return 0;
}