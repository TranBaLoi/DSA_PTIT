#include<bits/stdc++.h>
using namespace std;
int findMax(int a[], int l, int r)
{
	int ans = -1e9;
	while(l <= r)
	{
		ans = max(ans,a[l]);
		l++;
	}
	return ans;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n, k; 	cin >> n >> k;
		int a[n];
		for(auto &x : a)	cin >> x;
		int r=k-1;
		int id = 0;
		int ans = findMax(a, 0, r);
		cout << ans << " ";
		r = k;
		while(r<n)
		{
			if(a[r-k] == ans)	ans = findMax(a,r-k+1,r);
			else ans = max(ans,a[r]);
			r++;
			cout << ans << " ";
		}
		cout << endl;
	}
}
