#include<bits/stdc++.h>
using namespace std;

bool check(string s)
{
    if(s[0]!='H' || s[s.length()-1] !='A' ) return false;
    int i = 0;
    while(i < s.size())
    {
        if(s[i]=='H' && s[i+1] == 'H')  return false;
        i++;
    }
    return true;
}
int main()
{
    int t;  cin >> t;
    while (t--)
    {
        int n;  cin >> n;
        string s = string (n, 'A');
        while(1){
            int i = n - 1;
            while (i>=0 && s[i] == 'H') --i;
            if(i<0) break;
            s[i] = 'H';
            for(int j=i+1;j<n;j++)
            {
                s[j] = 'A';
            }
            if(check(s) == true) cout << s << endl;
        }
    }
    
    return 0;
}