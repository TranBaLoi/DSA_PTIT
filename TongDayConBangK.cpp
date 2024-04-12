#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int vs[1000] = {0}, cnt = 0, n, k;
int a[100];
void init()
{
    for(int i = 0; i < n; i++)  cin >> a[i];
}
void sinh(int a[], int n, int k)
{
    while(1)
    {
        int i = n - 1;
        while(i>=0 && vs[i]==1) --i;
        if(i<0) return;
        vs[i] = 1;
        int l = i+1;
        while(l<n)
        {
            vs[l] = 0;
            l++;
        }
        int sum = 0;
        for(int j=0;j<n;j++)
        {
            if(vs[j]==1)    sum += a[j];    
        }
        if(sum == k)    
        {
            for(int j=0;j<n;j++)
            {
                if(vs[j]==1)    cout << a[j] << " ";
            }
            cnt++;
            cout << endl;
        }
    }
}

int main()
{
    int n, k;   cin >> n >> k;
    init();
    sinh(a,n,k);
    cout << cnt;
    return 0;
}