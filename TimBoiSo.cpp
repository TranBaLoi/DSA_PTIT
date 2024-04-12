#include<bits/stdc++.h>
using namespace std;

int n;
int a[100];
int k = 1, flag = 0;
void Try(string s = "", int i = 0)
{
    if(flag) return;
    if(i == k)
    {
        if(s[0] == '0') return;
        else
        {
            if(stoll(s) % n == 0)
            {
                cout << s << endl;
                flag = 1;
            }
            return;
        }
    }
    Try(s + '0', i + 1);
    Try(s + '9', i + 1);
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        cin >> n;
        flag = 0, k = 1;
        while(!flag)
        {
            Try();
            k++;
        }
    }
    return 0;
}