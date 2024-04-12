#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin >> t;
    while (t--)
    {
        int n;   cin >> n;
        int a[n];
        string s;
        map<string, int> mp;
        for(auto &x : a)
        {
            cin >> x;
            s += to_string(x);
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            a[i] = i+1;
        }
        while (1)
        {
            ++cnt;
            string s1 = "";

            for (int j = 0; j < n; j++)
            {
                s1 += to_string(a[j]);
            }
           
            if(s1 == s)
            {
                cout << cnt << endl;
                break;
            }
                
            int i = n - 1;
            while(i>=0 && a[i] > a[i+1]) --i;
            
                int k = n;
                while (a[k] < a[i]) k--;
                swap(a[k], a[i]);
                int l = i+1, r = n-1;
                while (l<r)
                {
                    swap(a[l], a[r]);
                    l++;
                    r--;
                }
            
            
        }
        

    }
    
    return 0;
}