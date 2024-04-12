#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin >> t;
    while (t--)
    {
        int n, k;   cin >> n >> k;
        int a[k];
        string s;

        for(auto &x : a)
        {
            cin >> x;
            s += to_string(x);
        }
        int cnt = 0;
        for (int i = 0; i < k; i++)
        {
            a[i] = i+1;
        }
        while (1)
        {
            ++cnt;
            string s1 = "";

            for (int j = 0; j < k; j++)
            {
                s1 += to_string(a[j]);
            }
           
            if(s1 == s)
            {
                cout << cnt << endl;
                break;
            }
                
            int i = k - 1;
            while(i>=0 && a[i] >= n-k+i+1) --i;
            a[i] += 1;
            for(int j=i+1;j<k;j++)
            {
                a[j] = a[i] + j - i;
            }
        }
        

    }
    
    return 0;
}