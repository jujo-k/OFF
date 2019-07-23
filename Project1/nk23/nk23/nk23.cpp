#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	int n;
	char jia,yi;
	scanf("%d",&n);
	int jiawin=0,yiwin=0;
	int jiac=0,jiab=0,jiaj=0;
	int yic=0,yib=0,yij=0;
	for (int i=0;i<n;i++)
	{
	
		scanf("%s %s",&jia,&yi);
		if (jia=='B')
		{
			if (yi=='C')
			{
				jiawin++;
				jiab++;
			}else if (yi=='J')
			{
				yiwin++;
				yij++;
			}
		}
		 	if (jia=='C')
		{
			if (yi=='B')
			{
				yiwin++;
				yib++;
			}else if (yi=='J')
			{
				jiawin++;
				jiac++;
			}
		}
		 if (jia=='J')
		{
			if (yi=='B')
			{
				jiawin++;
				jiaj++;
			}else if (yi=='C')
			{
				yiwin++;
				yic++;
			}
		}
}
	printf("%d %d %d\n",jiawin,n-jiawin-yiwin,yiwin);
	printf("%d %d %d\n",yiwin,n-jiawin-yiwin,jiawin);

	int max=0;
	max=jiab;
	if (jiac>jiab)
	{
		max=jiac;
		if (jiaj>jiac)
		{
			max=jiaj;
		}
	}else if (jiaj>jiab)
	{
		max=jiaj;
	}
	int maxyi=0;
	maxyi=yib;
	if (yic>yib)
	{
		maxyi=yic;
		if (yij>yic)
		{
			maxyi=yij;
		}
	}else if (yij>yib)
	{
		maxyi=yij;
	}
	

	if (max==jiab)	printf("B ");
	if (max==jiac)	printf("C ");
	 if (max==jiaj)	printf("J ");

	if (maxyi==yib)	printf("B");
	 if (maxyi==yic)	printf("C");
	 if (maxyi==yij)	printf("J");

	return 0;
}