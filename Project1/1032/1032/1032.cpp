#include "stdafx.h"
#include<iostream>
using namespace std;

int main(){
	int n;
	int s[100010]={0};
	int a,b;
	int max=-1;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		s[a]+=b;
	}
	for (int i=1;i<=n;i++)
	{
		if (s[i]>max)
		{
			a=i;
			max=s[i];
		}
	}
printf("%d %d",a,max);
	return 0;
}