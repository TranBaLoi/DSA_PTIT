#include<bits/stdc++.h>
using namespace std;
using ll = long long;
// bool check(string a, string b)
// {
//     if(a.size() > b.size()) return false;
//     else if(a.size() == b.size())
//     {
//         if(a > b)   return false;
//     }
//     return true;
// }
int main()
{
    int t;  cin >> t;
    while(t--)
    {
        scanf("\n");
        ll n;   cin >> n;
        queue<string> q;
        int cnt = 1;
        q.push("1");
        while(!q.empty() && q.front().size() < 19)
        {
            string fr = q.front();
            q.pop();
            if(stoll(fr + "0") > n)  break;
            else
            {
                cnt++;
                q.push(fr + "0");
            }
            if(stoll(fr + "1") > n) break;
            else 
            {
                cnt++;
                q.push(fr + "1");
            }
        }

        cout << cnt << endl;
    }
    return 0;
}