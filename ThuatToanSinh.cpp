#include<bits/stdc++.h>
using namespace std;


int a[100];
int check(int a[], int n)
{
	int l=0, r=n-1;
	while(l<r)
	{
		if(a[l]!=a[r])	return 0;
		l++;
		r--;
	}
	return 1;
}
void Sinh(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		a[i] = 0;
	}
	while(1)
	{
		if(check(a,n)==1) 
		{
			for(int j=0;j<n;j++)	cout << a[j] << " ";
			cout << endl;
		}	
		int i = n-1;
		while(i>=0 && a[i] == 1) i--;
		if(i<0)	return ;
		a[i] = 1;
		for(int j = i+1;j<n;j++)	a[j] = 0;	
	}
}

int main()
{
	int n;	cin >> n;
	Sinh(a,n);
	return 0;
}