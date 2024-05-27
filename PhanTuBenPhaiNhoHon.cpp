#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >>t;
    while(t--)
    {
        int n;  cin >> n;
        int a[n], b[n];
        for(auto &x : a)    cin >> x;
        stack<int> st1;
        stack<pair<int, int>> st2;
        for(int i = 0; i < n; i++)
        {
            if(st1.empty())
            {
                st1.push(i);
            }
            else
            {
                while(!st1.empty() && a[st1.top()] < a[i])
                {
                    int x = st1.top();
                    st2.push({x, i});
                    st1.pop();
                }
                st1.push(i);
                while(!st2.empty() && a[st2.top().second] > a[i])
                {
                    b[st2.top().first] = a[i];
                    st2.pop();
                }
            }
        }
        while(!st1.empty())
        {
            b[st1.top()] = -1;
            st1.pop();
        }
        while(!st2.empty())
        {
            b[st2.top().first] = -1;
            st2.pop();
        }
        for(auto x : b) cout << x << " ";
        cout << endl;
    }
    return 0;
}