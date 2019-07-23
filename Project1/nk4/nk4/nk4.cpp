#include "stdafx.h"
#include <iostream>
#include<string>
using namespace std;

int main(){
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int lena=a.length();
	int lenb=b.length();
	int lenc=c.length();
	int lend=d.length();
	int len1=lena<lenb?lena:lenb;
	int len2=lenc<lend?lenc:lend;
	string week[10]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int flag=1;
	for (int i=0;i<len1;i++)
	{
		if (	(a[i]==b[i])	&&	((a[i]>='A')&&(a[i]<='Z'))&&flag==1	)
		{
				cout<<week[a[i]-'A']<<" ";
				a[i]='#';
				flag=0;
				
		}
		if (flag==0	&& 	(a[i]==b[i])	&&	(((a[i]>='A')&&(a[i]<='N'))||((a[i]>='0')&&(a[i]<='9'))||((a[i]>='a')&&(a[i]<='n'))	)	)
		{
			if ((a[i]>='0')&&(a[i]<='9'))
			{
				cout<<"0"<<a[i]<<":";
				break;
			}else if (((a[i]>='A')&&(a[i]<='N')))
			{
				cout<<a[i]-'A'+10<<":";
				break;
			}else if (((a[i]>='a')&&(a[i]<='n')))
			{
				cout<<a[i]-'a'+10<<":";
				break;
			}
		}
	}
for (int i=0;i<len2;i++)
{
	if ( 	(c[i]==d[i])	&&	(((c[i]>='A')&&(c[i]<='Z'))||((c[i]>='a')&&(c[i]<='z'))	)){
			if (i<10&&i>=0)
			{
				cout<<"0"<<i;
			}else 
				cout<<i;
			break;
	}
}


	return 0;
}