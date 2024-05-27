#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        string s;   cin >> s;
        stack<string> st;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                int tmp = s[i] - '0';
                while(s[i+1] >= '0' && s[i+1] <= '9')
                {
                    tmp = tmp*10 + s[i+1] - '0';
                    i++;
                }
                st.push(to_string(tmp));
            }
            else if(s[i] == '[')
            {
                st.push("[");
            }
            else if(s[i] == ']')
            {
                string res = st.top();
                st.pop();
                while(!st.empty() && st.top() != "[")
                {
                    res = st.top() + res;
                    st.pop();
                }
                st.pop();
                string tmp = res;
                if(st.top() == "[") 
                {
                    st.push(res);
                    st.pop();
                }
                else if((st.top() >= "a" && st.top() <= "z") || (st.top() >= "A" && st.top() <= "Z"))
                {
                    res = st.top() + res;
                    st.pop();
                    st.push(res);
                }
                else
               { int x = stoi(st.top());
                st.pop();
                while(x > 1)
                {
                    res += tmp;
                    x--;
                }
                st.push(res);}
            }
            else
                st.push(string(1, s[i]));
        }
        cout << st.top() << endl;
    }
}