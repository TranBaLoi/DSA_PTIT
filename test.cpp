#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	cin >> t;
	while(t--)
	{
		string x, y;	cin >> x >> y;
		int rx = x.length() - 1;
		string tich = "";
		int nho = 0;
		while(rx >= 0)
		{
			int ry = y.length()-1;
			while(ry >= 0)
			{
				int ao = (y[ry]-'0') * (x[rx]-'0') + nho;
				string tmp = to_string(ao);
				tich += tmp[1];
				nho = tmp[0]-'0';
				ry--;
			}
			rx--;
		}
		cout << tich << endl;
	}
}
