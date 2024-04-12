#include<bits/stdc++.h>
using namespace std;

string op = "+-*/";
string s;

vector<string> v;

void check()
{
    int n1 = stoi(s.substr(0, 2));
    int n2 = stoi(s.substr(5, 2));
    int n3 = stoi(s.substr(10, 2));
    if(s[3] == '+')  
    {
        if(n1 + n2 == n3)
            v.push_back(s);
    }
    else if(s[3] == '-') 
    {
        if(n1 - n2 == n3)
            v.push_back(s);
    }
    else if(s[3] == '*')
    {
        if(n1 * n2 == n3)
            v.push_back(s);
    }
    else if(s[3] == '/')
    {
        if(n1 / n2 == n3)
            v.push_back(s);
    }
}

void Try(int i = 0)
{
    if(i == s.length())
    {
        check();
        return;
    }
    if(s[i] == '?')
    {
        if(i == 3)
        {
            for(int j = 0; j < 4; j++)
            {
                s[i] = op[j];
                Try(i + 1);
                s[i] = '?';
            }
        }
        else
        {
            if(i != 0 && i != 5 && i != 10)
            {
                s[i] = '0';
                Try(i + 1);
                s[i] = '?';
            }
            for(char j = '1'; j <= '9'; j++)
            {
                s[i] = j;
                Try(i + 1);
                s[i] = '?';
            }
        }
    }
    else  Try(i + 1);
}

int main()
{
    int t;  cin >> t;
    cin.ignore();
    while(t--)
    {
        v.clear();
        getline(cin, s);
        Try();
        if(v.size() == 0)
            cout << "WRONG PROBLEM!" << endl;
        else
        {
            cout << *min_element(v.begin(), v.end()) << endl; 
        }
    }
}