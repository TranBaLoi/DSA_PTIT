#include<bits/stdc++.h>
using namespace std;

int n, a[100];
int vs[100] = {0};
vector<int> v;
string s;
set<string> se;

int check(vector<int> v)
{
    if(v.size() <= 1)   return 0;
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i] > v[i+1])   return 0;
    }
    return 1;
}
void backtrack(int i = 1)
{
    for(int j = 0; j <= 1; j++)
    {
        vs[i] = j;
        if(i == n)
        {
            for(int l = 1; l <= n; l++)
            {
                if(vs[l] == 1)
                {
                    v.push_back(a[l]);
                }
            }
            if(check(v)) 
            {
                for(auto x : v) s += to_string(x) + " ";
                se.insert(s);
                s = "";
            }
            v.clear();
        }
        else backtrack(i+1);
    }
}
int main()
{
    cin >> n;
    for(int i=1; i<=n; i++)  cin >> a[i];
    backtrack();
    for(auto x : se)    cout << x << endl;
    return 0;
}