#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        string s;   cin >> s;
        stack<int> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(isdigit(s[i]))  
                st.push(s[i] - '0');
            else if(s[i] == '*' || s[i] == '/')
            {
                int x = st.top();  st.pop();
                int y = st.top();  st.pop();
                if(s[i] == '*')
                {
                    int tmp = x * y;
                    st.push(tmp);
                }
                else
                {
                    int tmp = y / x;
                    st.push(tmp);
                }
            }
            else 
            {
                if(s[i] == '+')
                {
                   int x = st.top();  st.pop();
                    int y = st.top();  st.pop();
                    
                    int tmp = x + y;
                    st.push(tmp);
                }
                else
                {
                    int x = st.top();  st.pop();
                    int y = st.top();  st.pop();
                    
                    int tmp = y - x;
                    st.push(tmp);
                }
            }
        }
        cout << st.top() << endl;
    }
}