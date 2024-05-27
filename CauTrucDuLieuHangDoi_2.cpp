#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    queue<int> q;
    while(t--)
    {
        scanf("\n");
        string s;   cin >> s;
        if(s == "PRINTFRONT")
        {
            if(!q.empty())  cout << q.front() << endl;
            else cout << "NONE" << endl;
        }
        else if(s == "POP")
        {
            if(!q.empty())  q.pop();
        }
        else 
        {
            int tmp;    cin >> tmp;
            q.push(tmp);
        }
    }
    return 0;
}