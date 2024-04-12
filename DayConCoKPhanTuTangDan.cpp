#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], b[100];

void Try(int i = 1)
{
    for(int j = a[i-1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if(i == k)
        {
            for(int l = 1; l <= k; l++)
            {
                cout << b[a[l] - 1] << " ";
            }
            cout << endl;
        }
        else
            Try(i + 1);
    }
}
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i = 0; i < n; i++)  cin >> b[i];
        sort(b, b + n);
        Try();
    }
    return 0;
}