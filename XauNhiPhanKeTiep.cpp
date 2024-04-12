#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;  cin >> t;
    while(t--)
    {
        string s;   cin >> s;
        int i = s.length()-1;
        while(i>=0 && s[i]=='1') --i;
        if(i<0) 
        {
            for(int j=0;j<s.length();j++)
            {
                s[j] = '0';
            }
            cout << s;
            break;
        }
        s[i]='1';
        int k = i+1;
        while(k<s.length())
        {
            s[k] = '0';
            k++;
        }
        cout << s << endl;
    }
    return 0;
}