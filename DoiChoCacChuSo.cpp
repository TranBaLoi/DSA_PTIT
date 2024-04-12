#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin >> t;
    while (t--)
    {
        string s;
        int k;  cin >> k >> s;
        for(int i = 0; i < s.size(); i++)
        {
            char max = '0';
            int idx;
            int j = s.size() - 1;
            while(j > i && k > 0)
            {
                if(max < s[j])
                {
                    max = s[j];
                    idx = j;
                }
                j--;
            }
            if(max > s[i] && k > 0)
            {
                swap(s[i], s[idx]);
                k--;
            }
        }
        cout << s << endl;
    }
    
}