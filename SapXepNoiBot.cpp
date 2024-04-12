#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        int a[n + 1];
        vector<string> v;
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i < n; i++)
        {
            string s = "";
            bool flag = false;
            for(int j = 1; j <= n-i; j++)
            {
                if(a[j] > a[j+1])
                {
                    swap(a[j], a[j+1]);
                    flag = true;
                }
            }
            if(!flag)   break;
            s += "Buoc " + to_string(i) + ": ";
            for(int j = 1; j <= n; j++) s += to_string(a[j]) + " ";
            v.push_back(s);
        }
        reverse(v.begin(), v.end());
        for(auto x : v) cout << x << endl;
    }
}