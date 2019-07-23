#include "stdafx.h"
#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int a[101];
	for (int i=0;i<n;i++)
	{
			cin>>a[i];
	}
	m=m%n;
	for (int i=n-m;i<=n-1;i++)
	{
		cout<<a[i]<<" ";
	}

	int count=n-m;

	for (int j=0;j<n-m;j++)
	{
		cout<<a[j];
		count--;
		if (count!=0)
		{
			cout<<" ";
		}
	}


	return 0;
}
