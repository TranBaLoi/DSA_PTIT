#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        int k = 0;
        set<int> se;
        for(int i = 0; i < n; i++) 
        {
            int x;  cin >> x;
            se.insert(x);
        }
        if(se.size() == 1)  cout << -1 ;
        else
        {
            for(auto x : se)
            {
                if(k == 2)  break;
                else    cout << x << " ";
                k++;
            }
        }
        cout << endl;
    }
    return 0;
}