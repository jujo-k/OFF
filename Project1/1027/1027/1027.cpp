#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	int m;
	char c;	
	scanf("%d %c",&m,&c);
	int a[25];
	for (int i=1;i<25;i++)
	{	a[i]=2*i*i-1;
	}
	int temp=0;
	for (int i=1;i<25;i++)
	{
		if (a[i]<=m&&a[i+1]>m)
		{
			temp=i;
			break;
		}
	}



	for (int i=1;i<=temp-1;i++)
	{
		for (int j=0;j<i-1;j++)
		{
			printf(" ");
		}
		for (int m=(temp+1-i)*2-1;m>=1; m--)
		{
			printf("%c",c);
		}
		printf("\n");
	}
	for (int i=1;i<=temp;i++)
	{
		for (int j=1;j<=temp-i;j++)
		{
			printf(" ");
		}
		for (int m=2*i-1;m>0;m--)
		{
			printf("%c",c);
		}
		printf("\n");
	}

		printf("%d",m-a[temp]);
	


	return 0;
}
