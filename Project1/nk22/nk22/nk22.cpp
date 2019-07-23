#include "stdafx.h"
#include <iostream>
#include <string>
using namespace  std;

int main(){
	char s[1010];
	int len,a;
	scanf("%s %d",&s,&a);
	len=strlen(s);
	if (s[0]-'0'==0)
	{
		printf("0 %d",a);
		return 0;
	}
	else if ((s[0]-'0')/a!=0)
	{
		printf("%d",(s[0]-'0')/a);
	}
	int yu=(s[0]-'0')%a;
	for (int j=1;j<len;j++)
	{
		
		printf("%d",(s[j]-'0'+yu*10)/a);
		yu=(s[j]-'0'+yu*10)%a;
	}

printf(" %d",yu);
	return 0;
}