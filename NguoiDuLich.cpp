#include<bits/stdc++.h>
using namespace std;
int n, res, idx;
int a[100][100], used[100];

void Try(int i, int sum = 0, vector<int> tmp = {1})
{
    if(sum > res)   return;
    if(tmp.size() >= n)
    {
        // cout << sum + a[tmp.size() - 1][1] << endl;

        res = min(res, sum + a[tmp[tmp.size() - 1]][1]);
        return;
    }
    for(int j = 1; j <= n; j++)
    {
        if(a[i][j] != 0 && !used[j])
        {
            used[j] = 1;
            tmp.push_back(j);
            Try(j, sum + a[i][j], tmp);
            used[j] = 0;
            tmp.pop_back();
        }
    }
    
}
int main()
{
    cin >> n;
    res = INT_MAX;
    for(int i = 1; i <= n; i++)
    {
        used[i] = 0;
        for(int j = 1; j <= n; j++)  cin >> a[i][j];
    }
    used[1] = 1;
    Try(1);
    cout << res;
    // for(int i = 0; i < v.size(); i++)
    // {
    //     for(int j = 0; j < v[i].size(); j++) 
    //         cout << v[i][j] << " ";
    //     cout << endl;
    // }
    return 0;
}