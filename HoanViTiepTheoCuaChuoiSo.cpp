#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int k; cin >> k;
        string s;   cin >> s;
        int i = s.size() - 1;
        while(i > 0 && s[i] >= s[i+1])  i--;
        if(i==0)
        {
            cout << k << " BIGGEST" << endl;
            continue;
        }
        int r = s.size() - 1;
        while(s[i] >= s[r]) r--;
        swap(s[i], s[r]);
        int l = i+1; r = s.size() - 1;
        while(l < r)
        {
            swap(s[l], s[r]);
            l++;
            r--;
        } 
        cout << k << " " << s << endl;

    }
    return 0;
}