#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        queue<int> q;
        while(n--)
        {
            int k;  cin >> k;
            if(k == 1)
                cout << q.size() << endl;
            else if(k == 2)
            {
                if(!q.empty())  cout << "NO";
                else cout << "YES";
                cout << endl;
            }
            else if(k == 3)
            {
                int tmp; cin >> tmp;
                q.push(tmp);
            }
            else if( k == 4)
            {
                if(!q.empty())    q.pop();
            }
            else if(k == 5)
            {
                if(q.empty())   cout << -1 << endl;
                else cout << q.front() << endl;
            }
            else
            {
                if(q.empty())   cout << -1 << endl;
                else cout << q.back() << endl;
            }
        }
    }
    return 0;
}