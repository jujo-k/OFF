#include "stdafx.h"
#include <stdio.h>
#include <math.h>


int isPerem(int n){
	int i=0;
	for (i=2;i<(int) sqrt((float)n);i++)
	{
		if (n%i)
			return 1;`
		else
			return 0;
	}
}
int main(){
int i=0,j=0,m=0,n=0,sum=0;
int str[200];

for (i=0;i<200;i++)
{
	if (isPerem(i))
		str[++j]=i;
}
scanf("%d %d",&m,&n);
for (i=m;i<=n;i++)
{
	sum+=str[i];
}
printf("%d",sum);
}