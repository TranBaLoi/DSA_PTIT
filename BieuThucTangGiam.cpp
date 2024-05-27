#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        string s;   cin >> s;
        stack<int> st;
        int ans = 1;
        st.push(ans);
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'D')
            {
                ans++;
                st.push(ans);
            }
            else
            {
                while(!st.empty())
                {
                    cout << st.top();   st.pop();
                }
                ans++;
                st.push(ans);
            }
        }
        while(!st.empty())
        {
            cout << st.top();   st.pop();
        }
        cout << endl;
    }
    return 0;
}