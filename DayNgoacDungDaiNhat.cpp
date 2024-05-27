#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;   cin >> s;
        stack<int> st;
        int cnt = 0;
        int res = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(st.empty())
            {
                st.push(i);
                continue;
            }
            if(s[i] == '(')
                st.push(i);
            else
            {
                if(s[st.top()] == '(')
                {
                    st.pop();
                    int l = st.empty() ? -1 : st.top();
                    
                    res = max(res, i - l);
                }
                else
                    st.push(i);
            }
        }
        cout << res << endl;
    }
}