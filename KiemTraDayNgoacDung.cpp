#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    cin.ignore();
    while(t--)
    {
        scanf("\n");
        string s;   cin >> s;
        stack<char> st;
        bool flag = true;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                st.push(s[i]);
            else
            {
                if(!st.empty())
                {
                    if(s[i] == ')')
                    {
                        if(st.top() != '(')
                        {
                            flag = false;
                            st.pop();
                        }
                        else st.pop();
                    }
                    else if(s[i] == ']')
                    {
                        if(st.top() != '[')
                        {
                            flag = false;   
                             st.pop();
                        }
                        else st.pop();
                    }
                    else if(s[i] == '}')
                    {
                        if(st.top() != '{')
                        {
                            flag = false;
                             st.pop();
                        }
                        else st.pop();
                    }
                }
                else
                    flag = false;
            }
        }
        if(flag)    cout << "YES";
        else cout << "NO";
        cout << endl;    
    }
}