#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,d;
    cin >> a >> b;
    c = a, d = b;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='6') a[i] = '5';
        if(a[i]=='5')   c[i] = '6';
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i]=='6') b[i] = '5';
        if(b[i]=='5') d[i] = '6';
    }
    cout <<stoi(a)+stoi(b)<< " " << stoi(c)+stoi(d);
}