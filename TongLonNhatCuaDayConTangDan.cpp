#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll mod = 1e9 + 7;


int main(){

	int t;
	cin >> t;	

	while(t--){
		int n;
		cin >> n;
		vector<ll> a(n);
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		vector<ll> dp = a;
		for(int i = 1; i < n; ++i){
			
			for(int j = 0; j < i; ++j){
				if(a[i] > a[j]){
					dp[i] = max(dp[i], dp[j] + a[i]);
				}
			}
		}
		ll res = dp[0];
		for(int i = 0; i < n; ++i)
			res = max(res, dp[i]);
		cout << res << '\n';
	}	

	return 0;
}
