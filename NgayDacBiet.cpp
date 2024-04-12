#include<bits/stdc++.h>
using namespace std;

int check(string s)
{
    if(s[4] == '0') return 0;
    if(s[0]=='0' && s[1] == '0')   return 0;
    if(s[2] == '2') return 0;
    if(s[2] == '0' && s[3] == '0')  return 0;
    return 1;
}
int a[100] = {0};
string s;
void backtrack(int i = 0)
{
    for(int j=0; j<=1; j++)
    {
        a[i] = j;
        if(i == 7)
        {
            for(int l = 0; l<8; l++)
            {
                if(a[l]==1) s[l] = '2';
                else s[l] = '0';
            }
            if(check(s))
            {
                s.insert(s.begin()+2,'/');
                s.insert(s.begin()+5,'/');
                cout << s << endl;
                s = string(8,'0');
            }
        }
        else backtrack(i+1);
    }
}

int main()
{
    // string s = "22022022";
    // s.insert(s.begin()+2,'/');
    // s.insert(s.begin()+5,'/');
    s = string(8,'0');
    backtrack();
    return 0;
}