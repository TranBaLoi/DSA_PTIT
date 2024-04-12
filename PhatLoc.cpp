#include<bits/stdc++.h>
using namespace std;

int check(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[0] == '6' || s[s.size()-1] == '8' )    return 0;
        if(s[i] == '8' && s[i+1] =='8') return 0;
        if(s[i] == '6' && s[i+1] == '6' && s[i+2] == '6'
        && s[i+3] == '6')   return 0;
    }
    return 1;
}
int a[100] , n, lp[100];
vector<string> v;
void backtrack(int i = 1)
{
    for(int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if(i == n)
        {   
            string s;
            for(int i=1;i<=n;i++)
            {
                if(a[i] == 1) s += '8';
                else s += '6';
            } 
            v.push_back(s);
        }
        else backtrack(i+1);
    }
}
int main()
{
    cin >> n;
    backtrack();
    for(auto x : v)
    {
        if(check(x))    cout << x << endl;
    }
    return 0;
}