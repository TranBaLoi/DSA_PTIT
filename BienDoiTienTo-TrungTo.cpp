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
        reverse(s.begin(), s.end());
        for(char c : s)
        {
            if(isOperator(c))
            {
                string tmp1 = st.top(); st.pop();
                string tmp2 = st.top(); st.pop();
                string tmp = "(" + tmp1 + string(1, c) + tmp2 + ")";
                st.push(tmp);
            }
            else
                st.push(string(1,c));
        }
        cout << st.top() << endl;
    }
    return 0;
}