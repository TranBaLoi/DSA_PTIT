#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll mod = 1e9 + 7;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		int cnt = 0;
		for(int i = 0; i < n - 1; ++i){
			int mn = i;
			for(int j = i + 1; j < n; ++j){
				if(a[j] < a[mn]){
					mn = j;
				}
			}
			if(a[mn] < a[i]){
				++cnt;
				swap(a[mn], a[i]);
			}
		}
		cout << cnt << '\n';
	}
    return 0;
}

// do phuc tap: O(n^2). 

