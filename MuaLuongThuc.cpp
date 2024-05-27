#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n, s, m;    cin >> n >> s >> m;
        int food = s * m;
        int k = s / 7;
        int buy = n * (s - k);
        if(buy < food)  
        {
            cout << -1 << endl;
            continue;
        }
    
        int res = food / n;
        if(food % n != 0)   res++;
    
        cout << res << endl;
    }
}