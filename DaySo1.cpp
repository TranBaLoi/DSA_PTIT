#include<bits/stdc++.h>
using namespace std;

vector<int> v;
int a[100];
void backtrack(int n)
{
    if(n == 1)   
    {
         cout << "[" << a[0] << "]";
        return;
    }
    else
    {
        for(int i=0; i<n;i++)
        {
            if(i==0) cout << "[" << a[i] << " ";
            else if(i==n-1) cout << a[i] << "]";
            else cout << a[i] << " ";
        }
    }
    cout << endl;
    v.clear();
    for(int j = 0; j<n-1; j++)
    {
        v.push_back(a[j] + a[j+1]);
    }
    for(int i = 0; i<v.size();i++)
    {
        a[i] = v[i];
        
    }
    backtrack(v.size());
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        for(int i=0; i<n;i++)
        {
            cin >> a[i];
        }
        backtrack(n);
        cout << endl;
    }
}