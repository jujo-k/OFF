#include "stdafx.h"
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int T;
	scanf("%d",&T);
	while (T--)
	{
		char str[110];
		scanf("%s",str);
		int len=strlen(str);
		int nump=0,numt=0,other=0;
		int locp=-1,loct=-1;
		for (int i=0;i<len;i++)
		{
			if (str[i]=='P')
			{
				nump++;
				locp=i;
			}else if (str[i]=='T')
			{
				numt++;
				loct=i;
			}else if (str[i]!='A')
			{
				other++;
			}
		}
			if ((nump!=1)||(numt!=1)||(other!=0)||(loct-locp<=1))
			{
				printf("NO\n");
				continue;
			}
			int x=locp,y=loct-locp-1,z=len-loct-1;
			if (z-(y-1)*x==x)
			{
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}
	
	return 0;
}
