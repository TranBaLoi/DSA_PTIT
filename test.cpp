#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(-1);
	v.push_back(-2);
	v.push_back(0);
	v.push_back(13);
	v.push_back(5);
	sort(v.begin(), v.end());
	for(auto x : v)
		cout << x << endl;
}