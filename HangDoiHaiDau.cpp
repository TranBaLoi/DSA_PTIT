#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    deque<int> q;
    while(t--)
    {
        scanf("\n");
        string s;   cin >> s;
        if(s == "PUSHBACK")
        {
            int tmp;    cin >> tmp;
            q.push_back(tmp);
        }
        else if(s == "PUSHFRONT")
        {
            int tmp;    cin >> tmp;
            q.push_front(tmp);
        }
        else if(s == "PRINTFRONT")
        {
           if(!q.empty()) cout << q.front() << endl;
           else cout << "NONE" << endl;
        }
        else if(s == "POPFRONT")
        {
            if(!q.empty()) q.pop_front() ;
        }
        else if(s == "PRINTBACK")
        {
          if(!q.empty())  cout << q.back() << endl;
          else cout << "NONE" << endl;
        }
        else if(s == "POPBACK")
        {
            if(!q.empty()) q.pop_back();
        }
    }
    return 0;
}