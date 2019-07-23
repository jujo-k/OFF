#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

bool isprem(int n){
	int m=(int) sqrt(  1.0*n) ;
	for (int i=2;i<=m;i++)
	{
		if (n%i==0)
			return false;
	}
	return true;
}
int main(){
		int t=1;
	int m,n;
	int a[10010];
	scanf("%d %d",&m,&n);
	for (int i=2;t<=n;i++)
	{
		if (isprem(i))
		{
			a[t]=i;
			t++;
		}
	}
	int count=0;
	for (int i=m;i<n;i++)
	{
		cout<<a[i];
		count++;
		if (count%10==0)
		{
			cout<<endl;
		}else
			cout<<" ";
	}
	cout<<a[n];
	return 0;
}