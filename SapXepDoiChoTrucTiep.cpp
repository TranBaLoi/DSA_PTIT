#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n, k = 1;  cin >> n;
        int a[n];
        vector<string> v;
        for(int i = 0; i < n; i++)  cin >> a[i];
        for(int i = 0; i < n-1; i++)
        {
            string s = "";
            int min = a[i], pos = i;
            for(int j = i; j < n; j++)
            {
                if(a[j] < min)
                {
                    min = a[j]; pos = j;
                    swap(a[i], a[pos]);
                }
            }
            s += "Buoc " + to_string(k) + ": ";
            for(auto x : a) s += to_string(x) + " ";
            v.push_back(s);
            k++;
        }
        reverse(v.begin(), v.end());
        for(auto x : v) cout << x << endl;
    }
    return 0;
}