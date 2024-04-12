#include<bits/stdc++.h>
using namespace std;

int b[100], a[100];
int n, k;
string s;
int ok = 0;
void backtrack(int i = 1)
{
    for(int j = 1; j >= 0; j--)
    {
        b[i] = j;
        if(i == n)
        {
            s = "";
            int sum = 0;
            for(int l = 1; l <= n; l++)
            {
                if(b[l] == 1)
                {
                    sum += a[l];
                }
            }
            if(sum == k)    
            {
                ok = 1;
                cout << "[";
                for(int l = 1; l <= n; l++)
                {
                    if(b[l] == 1)
                    {
                       s += to_string(a[l]) + " ";
                    }
                }
                s.erase(s.size()-1);
                cout << s;
                cout << "] " ;
            }
        }
        else backtrack(i+1);
    }
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int x, y;   cin >> x >> y;
        n = x, k = y;
        for(int i = 1; i <= n; i++) 
        {
            int tmp;    cin >> tmp;
            a[i] = tmp;
        }
        sort(a+1, a+n+1);
        backtrack();
        if(ok == 0) cout << -1;
        else ok = 0;
        cout << endl;
    }
    return 0;
}