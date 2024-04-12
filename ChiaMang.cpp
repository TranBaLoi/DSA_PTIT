#include<bits/stdc++.h>
using namespace std;

int n, k, res, flag = 0;
int a[100], used[100];
set<string> v;
void Try(int i = 0, int sum = 0, string s = "")
{
    if(flag)    return;
    if(sum > res)   return;
    // if(i == n)  return;
    if(sum == res)
    {
        sort(s.begin(), s.end());
        v.insert(s);
        if(v.size() == k)   
            flag = 1;
        return;
    }
    for(int j = i; j < n; j++)
    {
        if(!used[j])
        {
            used[j] = 1;
            if(sum+a[j]<=res) Try(i + 1, sum + a[j], s + to_string(a[j]));
            used[j] = 0;
        }
    }
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        cin >> n >> k;
        flag = 0;
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            used[i] = 0;
            cin >> a[i];
            sum += a[i];
        }
        if(sum % k != 0)
        {
            cout << 0 << endl;
            continue;
        }
        res = sum / k;
        sort(a, a+n);
        v.clear();
        Try();
        if(v.size() == k)    
            cout << 1 << endl;
        else    
            cout << 0 << endl;
        // for(auto x : v) cout << x << endl;
    }
    return 0;
}