#include<bits/stdc++.h>
using namespace std;

int n, a[100][100], x[100], k;
int vs[100];
vector<string> v;
void init()
{
    for(int i = 1; i <= n; i++)
    {
        x[i] = i;
        vs[i] = 0;
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }
}

void Try(int i = 1)
{
    if(i > n)
    {
        int sum = 0;
        for(int j = 1; j <= n; j++)
        {
            sum += a[j][x[j]];
        }
        if(sum == k)
        {
            string s = "";
            for(int j = 1; j <= n; j++)
            {
                s += to_string(x[j]) + " ";
            }
            v.push_back(s);
        }
        return;
    }
    for(int j = 1; j <= n; j++)
    {
        if(vs[j] == 0)
        {
            vs[j] = 1;
            x[i] = j;
            Try(i + 1);
            vs[j] = 0; 
        }
    }
}
int main()
{
    cin >> n >> k;
    init();
    Try();
    cout << v.size() << endl;
    for(auto x : v) cout << x << endl;
    return 0;
}