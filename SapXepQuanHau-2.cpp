#include<bits/stdc++.h>
using namespace std;

int n = 8, hang[100], cot[100], dc1[100], dc2[100];
int a[10], val[10][10], res;

void init()
{
    res = -1e9;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) cin >> val[i][j];
    }
    for(int i = 0; i < 10; i++)
    {
        cot[i] = dc1[i] = dc2[i] = 0;
    }
}

void Try(int i = 1)
{
    for(int j=1; j<=n; j++)
    {
        if(cot[j] == 0 && dc1[i-j+n] == 0 && dc2[i+j-1] == 0)
        {
            hang[i] = j;
            cot[j] = dc1[i-j+n] = dc2[i+j-1] = 1;
            if(i == n)
            {
                int tmp = 0;
                for(int l = 1; l <= n; l++)
                    tmp += val[l][hang[l]];
                res = max(res, tmp);
            }
            else Try(i+1);
            cot[j] = dc1[i-j+n] = dc2[i+j-1] = 0;
        }
    }
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        init();
        Try();
        cout << res << endl;
    }
    return 0;
}