#include<bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        if (arr[m] == x)
            return m;
 
        if (arr[m] < x)
            l = m + 1;
 
        else
            r = m - 1;
    }
 
   return -1;
}
 
int main()
{
    int t;  cin >> t;
    while (t--)
    {
        int n;
		cin >> n;


		int tmp;
		map<int, int> cnt;
		for(int i = 0; i < n; ++i){
			cin >> tmp;
			cnt[tmp]++;
		}
		bool flag = false;
		int k = n / 2;

		int res;
		for(auto p : cnt){
			if(p.second > k){
				flag = true;
				res = p.first;
			}
		}
		if(flag){
			cout << res;
		}else
			cout << "NO";
		cout << '\n';
    }

}