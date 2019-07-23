#include "stdafx.h"
#include<iostream>
#include <string>
using namespace std;

int main(){
	char s[10010];
	int dian,pos,ans;
	gets(s);
	int len=strlen(s);
	if (s[0]=='-')
	{
		cout<<"-";
	}
	for (int i=1;i<len;i++)
	{
		if (s[i]=='.')
			dian=i;
		if (s[i]=='E')
			pos=i;
	}
	for (int i=pos+2;i<len;i++)
	{
		ans=(s[i]-'0')+ans*10;
	}
	if (ans==0)
	{
		for (int i=1;i<pos;i++)
		{
			printf("%c",s[i]);
		}
	}

	if (s[pos+1]=='-')
	{
		cout<<"0.";
		for (int i=0;i<ans-1;i++)
		{
			cout<<"0";
		}
		cout<<s[1];
		for (int i=3;i<pos;i++)
		{
			cout<<s[i];
		}
	}else if (s[pos+1]=='+')
	{
		for (int i=1;i<pos;i++)
		{
			if (s[i]=='.')continue;
			printf("%c",s[i]);
			if (i==ans+2 && pos-3!=ans)
				printf(".");
		
		}
		for (int i=0;i<ans-(pos-3);i++)
		{
			printf("0");
		}
	}



	return 0;
}
