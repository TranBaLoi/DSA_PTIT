#include<bits/stdc++.h>
using namespace std;

string add(string a, string b)
{
    string res="";
    while(a.size()<b.size()) a="0"+a;
    while(b.size()<a.size()) b="0"+b;
    int carry = 0;
    for(int i=a.size()-1; i>=0; i--)
    {
        char tmp=a[i]+b[i]+carry;
        if(tmp-'0'>'9') {carry = 1; tmp-=10;}
        else carry=0;
        res.push_back(tmp-'0');
    }
    if(carry) res.push_back('1');
    reverse(res.begin(), res.end());
    return res;
}

string mul(string a, string b)
{
    vector<int> x, y;
    int n=a.size(), m=b.size(), l=m+n;
    vector<vector<int>> res(m);
    for(int i=0; i<n; i++) x.push_back(a[i]-'0');
    for(int i=0; i<m; i++) y.push_back(b[i]-'0');
    for(int i=m-1; i>=0; i--)
    {
        int carry=0;
        int idx = m-i-1;
        while(idx--) res[m-i-1].push_back(0);
        for(int j=n-1; j>=0; j--)
        {
            int tmp = x[j]*y[i]+carry;
            res[m-i-1].push_back(tmp%10);
            carry=tmp/10;
        }
        if(carry) res[m-i-1].push_back(carry);
        while(res[m-i-1].size()<l) res[m-i-1].push_back(0);
        reverse(res[m-i-1].begin(), res[m-i-1].end());
    }
    string ans="";
    for(int i=0; i<res.size(); i++)
    {
        string tmp="";
        for(int j=0; j<res[i].size(); j++) tmp+=(char)(res[i][j]+'0');
        ans = add(ans, tmp);
    }
	while(ans[0]=='0') ans.erase(ans.begin()); 
    return ans;
}

int main()
{
     string f[105];
     f[0]="1";
     for(int i=1; i<=100; i++)
     {
        for(int j=0; j<i; j++)
        	f[i] = add(f[i], mul(f[j], f[i-j-1]));
     }
     int t; cin >> t;
     while(t--)
     {
         int n; cin >> n;
         cout << f[n] << endl;
     }
     return 0;
}
