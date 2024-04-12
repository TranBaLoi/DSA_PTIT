#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int k = 9;
void backtrack(int n)
{
    while(n >= 1000)
    {
        n -= 1000;
        ++cnt;
    }
    while(n < a[k]) k--;
    if(n <= 0)    return;
    else 
    {
        ++cnt;
        backtrack(n-a[k]);
    }
}
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        cnt = 0, k = 9;
        int n; cin >> n;
        backtrack(n);
        cout << cnt << endl;
    }
    return 0;
}