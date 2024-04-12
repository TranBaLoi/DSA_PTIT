
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll mod = 1e9 + 7;
int x;
class Num{
public:
	int idx;
	int val;
};

bool cmp(Num a1, Num a2)
{
	if(abs(a1.val - x) == abs(a2.val - x)) return a1.idx < a2.idx;
	return abs(a1.val - x) < abs(a2.val - x);	
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
		int n;
		cin >> n >> x;
		vector<Num> a(n);
		for(int i = 0; i < n; ++i){
			cin >> a[i].val;
			a[i].idx = i;
		}
		sort(a.begin(), a.end(), cmp);
		for(Num i : a){
			cout << i.val << ' ';
		}	
		cout << '\n';
	
	}
    return 0;
}

