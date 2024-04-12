#include<bits/stdc++.h>
using namespace std;

int n, a[100];

void Try(int i = 0, vector<int> tmp = {})
{
    if(i == n)
    {
        int sum = 0;
        bool flag = false;
        for(auto x : tmp)   sum += x;
        if(sum == 0 || sum == 1)    return;
        for(int i = 2; i <= sqrt(sum); i++)
        {
            if(sum % i == 0)   return;
        }
        for(auto x : tmp)   
            cout << x << " ";
        cout << endl;
        return;
    }
    Try(i + 1, tmp);
    tmp.push_back(a[i]);
    Try(i + 1, tmp);
    tmp.pop_back();
}

int main()
{
    int t;  cin >> t;
    while (t--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)    cin >> a[i];
        sort(a, a + n, greater<int>());
        Try();
    }
    return 0;

}