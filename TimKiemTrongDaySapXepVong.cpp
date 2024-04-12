#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n, k;  cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++)  cin >> v[i];
        vector<int>::iterator low;
        low = find(v.begin(), v.end(), k);
        cout << low - v.begin() + 1;
        cout << endl;
    }
    return 0;
}