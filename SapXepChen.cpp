#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n; 
    int a[n];
    vector<string> v;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        string s = "";
        for(int j=0;j<=i;j++)
        {
            if(a[i] < a[j]) swap(a[i],a[j]);
        }
        s += "Buoc " + to_string(i) + ": ";
        for(int j = 0; j <= i; j++) s += to_string(a[j]) + " ";
        v.push_back(s);
    }
    reverse(v.begin(), v.end());
    for(auto x : v) cout << x << endl;
    return 0;
}