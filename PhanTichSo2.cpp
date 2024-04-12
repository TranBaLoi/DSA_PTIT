#include<bits/stdc++.h>
using namespace std;

int n;
vector<string> v;

bool check(string s)
{
    for(int i = 0; i < s.size() - 1; i++)
    {
        if(s[i] < s[i + 1]) return false;
    }
    return true;
}

void Try(int i = 1, int sum = 0, string s = "")
{
    if(sum > n) return;
    if(sum == n)
    {
        if(check(s))   v.push_back(s);
        return;
    }
    for(int j = 1; j <= n; j++)
    {
        Try(i + 1, sum + j, s + to_string(j));
    }
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        cin >> n;
        v.clear();
        Try();
        // sort(v.begin(), v.end(), greater<string>());
        cout << v.size() << endl;
        if(n >= 10)
        {
            cout << "(" << v[v.size() - 1] << ") ";
            for(int i = v.size() - 2; i >= 0; i--)
            {
                cout << "(";
                for(int j = 0 ; j < v[i].size()-1; j++)
                {
                    cout << v[i][j] << " ";
                }
                cout << v[i][v[i].size() - 1] << ") ";
            }
        }
        else
        {
            for(int i = v.size() - 1; i >= 0; i--)
            {
                cout << "(";
                for(int j = 0 ; j < v[i].size()-1; j++)
                {
                    cout << v[i][j] << " ";
                }
                cout << v[i][v[i].size() - 1] << ") ";
            }
        }
        
        cout << endl;
    }
    return 0;
}