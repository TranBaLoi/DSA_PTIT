#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin >> n;
    int a[n];
    vector<string> v;
    for(auto &x : a)    cin >> x;
    for(int i = 0; i < n-1; i++)
    {
        string s = "";
        int min = a[i], pos = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < min)
            {
                min = a[j];
                pos = j;
            }
        }
        swap(a[i], a[pos]);
        s += "Buoc " + to_string(i+1) + ": ";
        for(auto x : a) s += to_string(x) + " ";
        v.push_back(s);
    }
    reverse(v.begin(), v.end());
    for(auto x : v) cout << x << endl;
    return 0;
}