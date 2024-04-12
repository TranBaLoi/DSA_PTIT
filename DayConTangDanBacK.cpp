#include<bits/stdc++.h>
using namespace std;

int a[100], b[100];
int n, k;
int cnt = 0;
void Try(int i = 1){
	for(int j = a[i - 1] + 1; j <= n - k + i; ++j){
		a[i] = j;
		if(i == k){
			vector<int> tmp;
			for(int l = 1; l <= k; ++l){
				tmp.push_back(b[a[l]]);
			}
			bool flag = true;
			for(int l = 0; l < k - 1; ++l){
				if(tmp[l] > tmp[l + 1]){
					flag = false;
				}
			}
			if(flag){

				++cnt;
			}
		}else
			Try(i + 1);
	}	
}
int main()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++)    cin >> b[i];
    Try(1);
    cout << cnt;
}