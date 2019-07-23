#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

int isf(int n){
	int ans=0;
	while (n!=0)
	{
		ans+=n%10;
		n=n/10;
	}
	return ans;
}
bool cmp(int a,int b){
	return a<b;
}

int main(){
	int n,temp;
	scanf("%d",&n);
	int a[1010]={0};
	int t=0;
	for (int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		if (isf(temp))
			a[t++]=isf(temp);
	}
		sort(a,a+t,cmp);
		temp=t;
	for (int j=temp;j>0;j--)
	{	
		if (a[j]==a[j-1])
		{
			a[j]=0;
			t--;
		}
	}
printf("%d\n",t);
for (int i=0;i<n;i++)
{
	if (a[i]!=0)
	{
		printf("%d",a[i]);
		t--;
		if (t!=0)
			printf(" ");
	}

}

	return 0;
}