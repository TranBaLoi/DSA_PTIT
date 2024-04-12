#include<bits/stdc++.h>
using namespace std;

int cot[100], dc1[100], dc2[100];
int n, hang[100], cnt = 0;

void backtrack(int i = 1)
{
    for(int j=1; j<=n; j++)
    {
        if(cot[j] == 0 && dc1[i-j+n] == 0 && dc2[i+j-1] == 0)
        {
            hang[i] = j;
            cot[j] = dc1[i-j+n] = dc2[i+j-1] = 1;
            if(i == n)
            {
                cnt++;
            }
            else backtrack(i+1);
            cot[j] = dc1[i-j+n] = dc2[i+j-1] = 0;
        }
    }
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        cnt = 0;    cin >> n;
        for(int i=1; i<=99; i++) 
            cot[i] = dc1[i] = dc2[i] = 0;
        backtrack();
        cout << cnt << endl;
    }
    return 0;
}