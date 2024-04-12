#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll fibo[1000];
void init()
{
    fibo[1] = 1;
    fibo[2] = 1;
    for(int i = 3; i <= 92; i++)
    {
        fibo[i] = fibo[i-2] + fibo[i - 1];
    }
}

int main()
{
    init();
    int t;  cin >> t;
    while(t--)
    {
        ll n, k;    cin >> n >> k;
        while(n > 2)
        {
            if(k <= fibo[n-2])
            {
                n -= 2;
            }
            else
            {
                k -= fibo[n-2];
                n -= 1;
            }
        }
        if(n == 1)  cout << 0;
        else if(n == 2)  cout << 1;
        cout << endl;
    }
    return 0;
}