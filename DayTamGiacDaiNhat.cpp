#include<bits/stdc++.h>
using namespace std;
bool check1(int a[], int n)
{
	for(int i = 1; i < n; i++)
	{
		if(a[i] <= a[i+1])	return false;
	}
	return true;
}
bool check2(int a[], int n)
{
	for(int i = 1; i < n; i++)
	{
		if(a[i] >= a[i+1])	return false;
	}
	return true;
}
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		int n;	cin >> n;
		int a[n+1];
		for(int i = 1; i <= n; i++)		cin >> a[i];
		if(check1(a, n) || check2(a, n))
		{
			cout << n << endl;
			continue;
		}
		for(int i = 2; i <= n; i++)
			a[i-1] = a[i] - a[i - 1];
		// for(int i = 1; i <= n; i++)		cout << a[i] << " ";
		int mid = -1;
		for(int i = 2; i < n; i++)		
		{
			if(a[i - 1] > 0 && a[i + 1] < 0)	mid = i;
		}
		if(mid == -1)	
		{
			cout << 0 << endl;
			continue;
		}
		int l = mid-1, r = mid+1, cnt = 1;
		while(a[l] > 0 && l > 0)
		{
			cnt++;
			l--;
		}
		while(a[r] < 0 && r <= n)
		{
			cnt++;
			r++;
		}
		cout << cnt + 1 << endl;
	}
	return 0;
}
