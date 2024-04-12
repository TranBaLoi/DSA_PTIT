#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin >> t;
    while (t--)
    {
        string s; cin >> s;
        
            int i = s.size()-1;
            while (i>=0 && s[i]=='0')   --i;
            if(i<0) cout << string(s.size(),'1') << endl;
            else {
                s[i] = '0';
                for(int j = i + 1; j<s.size(); j++)
                {
                    s[j] = '1';
                }
                cout << s << endl;
            }
            

        
    }
    
}