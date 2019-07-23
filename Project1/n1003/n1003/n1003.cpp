#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

bool sushu(int n){
	int num=int (sqrt((double)n));
	for (int i=2;i<=num;i++)
	{
		if (n%i==0)
			return false;
	}
	return true;
}

int main (){
	int a[10000]={0};
	int temp=1;
	int m,n;
	cin>>m>>n;
	int j=0;
	for (int i=2;j<=n;i++)
	{
		if (sushu(i))
		{
			a[temp++]=i;
			j++;
		}
	
	}

	
	int s=0;
	for (int i=m;i<n;i++)
	{
		cout<<a[i];
		s++;
		if (s%10!=0)
		{
			printf(" ");
		}else{
			printf("\n");
		}
	}
	cout<<a[n];

	return 0;
}
