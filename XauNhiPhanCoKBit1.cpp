#include<bits/stdc++.h>
using namespace std;


int check(string s, int k)
{
    int cnt = 0;
    for(auto x : s){
        if(x == '1')    ++cnt;
    }
    if(cnt == k)    return 1;
    else return 0;
}
int main()
{
    int t;  cin >> t;
    while (t--)
    {
        int n, k;   cin >> n >> k;
        string s = string(n,'0');
        while(1)
        {
            int i = n - 1;
            while(i>=0 && s[i] == '1')  --i;
            if(i<0) break;
            s[i] = '1';
            for(int j=i+1;j<n;j++)
            {
                s[j] = '0';
            }
            if(check(s,k)) cout << s << endl;
        }
    }
    
}