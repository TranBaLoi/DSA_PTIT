#include<bits/stdc++.h>
using namespace std;

char c;
int vs[100] = {0};
string s;
int check(string ss)
{
    // if((ss[0] == 'A' && ss[1] == 'E') || (ss[0] == 'E' && ss[1] == 'A')) return 1;
    // else if((ss[ss.size()-1] == 'A' && ss[ss.size()-2] == 'E' )
    //         || (ss[ss.size()-1] == 'E' && ss[ss.size()-2] == 'A')) return 1;
    for(int i = 1; i < ss.size()-1; i++) 
    {
        if((ss[i]=='A' || ss[i]=='E') 
        && (ss[i-1]!='A' && ss[i-1] != 'E') 
        && (ss[i+1]!='A' && ss[i+1]!='E'))  return 0;
    } 
    return 1;
}
void backtrack(int i = 0)
{
    if(i >= s.size())
    {
        if(check(s))    cout << s << endl;
        return;
    }
    for(char j = 'A'; j <= c; j++)
    {
        if(vs[j] == 0)
        {
            s[i] = j;
            vs[j] = 1;
            backtrack(i+1);
            vs[j] = 0;
        }
    }
}
int main()
{
    cin >> c;
    s = string(c-'A'+1,'A');
    backtrack();
    return 0;
}