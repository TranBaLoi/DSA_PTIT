

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod = 1e9 + 7;

int n, k;
vector<string> res;
void backtrack(string s= "", int i = 0){

	if(i == n){
		int cnt = 0;
		for(int i = 0; i < n; ++i){
			int tmp = 0;
			while(s[i] == 'A'){
				++i;
				++tmp;
			}
			if(tmp > 0)
				--i;
			if(tmp == k)
				++cnt;
		}
		if(cnt == 1)
			res.push_back(s);
		return;
	}
	backtrack(s + "A", i + 1);
	backtrack(s + "B", i + 1);
}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n >> k;
	backtrack();	
	
	cout << res.size() << '\n';
	for(string i : res){
		cout << i << '\n';
	}
	return 0;
}

