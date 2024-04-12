#include<bits/stdc++.h>
using namespace std;

vector<int> v;
vector<string>  s;
int a[100];
void backtrack(int n)
{
    string ss = "";
    if(n == 1)   
    {
        ss = ss + "[" + to_string(a[0]) + "]";
        s.push_back(ss);
        return;
    }
    else
    {
        for(int i=0; i<n;i++)
        {
            if(i==0) ss += "[" + to_string(a[i]) + " ";
            else if(i==n-1) ss += to_string(a[i]) + "]";
            else ss += to_string(a[i]) + " ";
        }
        s.push_back(ss);
    }
    v.clear();
    for(int j = 0; j<n-1; j++)
    {
        v.push_back(a[j] + a[j+1]);
    }
    for(int i = 0; i<v.size();i++)
    {
        a[i] = v[i];
        
    }
    backtrack(v.size());
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        for(int i=0; i<n;i++)
        {
            cin >> a[i];
        }
        backtrack(n);
        for(int i = s.size()-1; i>=0; i--)
        {
            cout << s[i] << " ";
        }
        s.clear();
        cout << endl;
    }
}