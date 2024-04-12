#include<bits/stdc++.h>
using namespace std;

int vs[1000];
void reset()
{
    for(int i =0 ;i<1000; i++)
    {
        vs[i] = {0};
    }
}
bool check(string s, int vs[])
{
    if(s.size() % 2 == 0)
    {
        for(int i=0; i<s.size(); i++)
        {
            if(vs[s[i]] > s.size()/2)
            {
                return false;
            }
        }
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            if(vs[s[i]] > s.size()/2 + 1)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
   int t;   cin >> t;
   while(t--)
   {
        string s;   cin >> s;
        reset();
        for(int i=0; i<s.size(); i++)
        {
            vs[s[i]]++;
        }
        if(check(s, vs))    cout << 1;
        else cout << -1;
        cout << endl;
        
   }
   return 0;
}