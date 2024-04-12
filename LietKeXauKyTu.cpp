#include<bits/stdc++.h>
using namespace std;

int check(string s)
{
    for(int i = 0; i<s.size()-1;i++)
    {
        if(s[i] > s[i+1])   return 0;
    }
    return 1;
}
int n;
char c;
string s;
void backtrack(int i = 0)
{
    for(int j = 0; j <= c-'A'; j++)
    {
        s[i] = 'A' + j;
        if(i == n-1)
        {
            if(check(s))    cout << s << endl;
        }
        else backtrack(i+1);
    }
}
int main()
{
    cin >> c >> n;
    s = string(n,'A');
    backtrack();
    return 0;
}