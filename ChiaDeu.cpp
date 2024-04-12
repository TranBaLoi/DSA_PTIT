#include<bits/stdc++.h>
using namespace std;

int n, k, res, cnt = 0;
int a[100], used[100];
set<vector<int>> v;

void Try(int i = 0, int sum = 0, vector<int> tmp = {})
{
    if(res > 0 && sum > res)    return;
    if(res < 0 && sum < res)    return; 
    if(sum == res)
    {
        sort(tmp.begin(), tmp.end());
        v.insert(tmp);
        if(v.size() == k)   
        {
            // for(auto x : v)
            // {
            //     for(int j = 0; j < x.size(); j++)
            //     {
            //         cout << x[j] << " ";
            //     }
            //     cout << endl;
            // }
            cnt++;
            v.clear();
        }
        return;
    }
    for(int j = 0; j < n; j++)
    {
        if(!used[j])
        {
            used[j] = 1;
            tmp.push_back(a[j]);
            Try(i + 1, sum + a[j], tmp);
            tmp.pop_back();
            used[j] = 0;
        }
    }
}

int main()
{
    
    cin >> n >> k;
    cnt = 0;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        used[i] = 0;
        cin >> a[i];
        sum += a[i];
    }
    if(sum % k != 0)
    {
        cout << 0;
    }
    else 
    {
        res = sum / k;
        v.clear();
        sort(a, a+n);
        Try();
        cout << cnt;
    }
    // for(auto x : v)
    // {
    //     for(int j = 0; j < x.size(); j++)
    //     {
    //         cout << x[j] << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}