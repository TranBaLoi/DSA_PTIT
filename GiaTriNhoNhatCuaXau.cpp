
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int main(){
	int t;
	cin >> t;

	while(t--){
		int k;
		cin >> k;	
		string s;
		cin >> s;
		map<char,int> mp;
		for(char c: s)
			mp[c]++;
		priority_queue<ll> q;
		for(auto p : mp)
			q.push(p.second);
		ll res = 0;
		while(k--){
			ll top = q.top(); q.pop();
			top--; q.push(top);
		}
		while(!q.empty()){
			res += q.top() * q.top(); q.pop();
		}
		cout << res << '\n';
	}

	return 0;
}
