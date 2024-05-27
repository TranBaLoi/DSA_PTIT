#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        scanf("\n");
        string s;   getline(cin, s);
        stack<char> st;
        bool flag = false;
        for(int i = 0; i < s.size(); i++)
        {
            if(st.empty())  
            {
                st.push(s[i]);
                continue;
            }
            if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
                st.push(s[i]);
            else if(s[i] == ')')
            {
                if(st.top() == '(')
                    flag = true;
                else
                {
                    while(st.top() != '(')
                        st.pop();
                    st.pop();
                }
            }
        }
        if(flag)    cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}