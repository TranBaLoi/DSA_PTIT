#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        string s = string(n,'A');
        while(1)
        {
            cout << s << " ";
            int i=n-1;
            while(i>=0 && s[i]=='B')  --i;
            if(i<0) break;
            s[i] = 'B';
            for(int j=i+1;j<n;j++)
            {
                s[j] = 'A';
            }
        }
        cout  << endl;
    }
}