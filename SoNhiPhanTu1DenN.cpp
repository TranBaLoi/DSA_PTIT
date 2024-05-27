
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
			
		queue<string> q;
		q.push("1");
		while(n--){
			string fr = q.front(); q.pop();
			cout << fr << ' ';
				q.push(fr + "0");
				q.push(fr + "1");
		}
		cout << '\n';
	}
	return 0;
}