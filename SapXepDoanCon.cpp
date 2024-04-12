
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		vector<int> a(n);
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		vector<int> l(n), r(n);
		l[0] = a[0];
		r[n - 1] = a[n - 1];
		for(int i = 1; i < n; ++i)
			l[i] = max(a[i], l[i - 1]);
		for(int i = n - 2; i >= 0; --i)
			r[i] = min(a[i], r[i + 1]); 
		vector<int> res;
		for(int i = 0; i < n - 1; ++i){
			if(l[i] <= r[i + 1])
				res.push_back(i);
		}	
		cout << res.size() << '\n';
		for(int i: res)
			cout << i + 1 << ' ';
		cout << '\n';
	}
	return 0;
}

