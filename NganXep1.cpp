#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<int> st;
    while(getline(cin, s))
    {
        vector<string>  v;
        stringstream ss(s);
        string tmp;
        while(ss >> tmp)
        {
            v.push_back(tmp);
        }
        if(v.size() == 1)
        {
            if(v[0] == "show")
            {
                if(st.size() > 0)
                {
                    for(auto i : st)    cout << i << " ";
                    cout << endl;
                }
                else
                    cout << "empty" << endl;
            }
            else if(v[0] == "pop")
                st.pop_back();
        }
        else{
            int k = stoi(v[1]);
            if(v[0] == "push")
                st.push_back(k);
        }
    }
    return 0;
}