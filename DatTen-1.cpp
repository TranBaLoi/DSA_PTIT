#include<bits/stdc++.h>
using namespace std;

int vs[100] = {0};
vector<string> v;
int n, k;
void backtrack(int i = 1)
{
    for(int j = vs[i-1] + 1; j <= n-k+i; j++)
    {
        vs[i] = j;
        if(i==k)
        {
            for(int l = 1; l <= k; l++)
            {
                cout << v[vs[l]-1] << " ";
            }
            cout << endl;
        }
        else backtrack(i+1);
    }
}

int main()
{
    cin >> n >> k;
    set<string>  ss;
    for (int i = 0; i < n; i++)
    {
        string s;   cin >> s;
        ss.insert(s);
    }
    for(auto x : ss)    v.push_back(x);
    n = v.size();
    backtrack();
    return 0;

}