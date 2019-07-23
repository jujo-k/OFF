#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	string a,b,c,d;
	cin>>a>>b>>c>>d;

	int lena=a.length();
	int lenb=b.length();
	int min1=lena>lenb?lenb:lena;
	int lenc=c.length();
	int lend=d.length();
	int min2=lenc>lend?lend:lenc;

	int j;
		
	string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};

	for (int i=0;i<min1;i++)
	{
		if (a[i]==b[i]	&&	(a[i]>='A'&&b[i]<='G'))
		{
			cout<<week[a[i]-'A']<<" ";
			j=i;
			break;
		}
	}
	for (int i=j+1;i<min1;i++)
	{
		if (a[i]==b[i]	&&	((a[i]>='A'&&a[i]<='N')||(a[i]>=0	&& a[i]<=9))	)
		{
			if (a[i]>=0	&& a[i]<=9)
			{
				cout<<"0"<<a[i]-'0'<<":";
			} 
			else	if(a[i]>='A'&&a[i]<='N')
			{
				cout<<a[i]-'A'+10<<":";
			}
			break;
		}
	}

	for (int i=0;i<min2;i++)
	{
		if (c[i]==d[i]	&&	((c[i]>='a'&&c[i]<='z')||(c[i]>='A'&&c[i]<='Z')))
		{
				if (i<10)
				{
					cout<<"0"<<i;
				} 
				else
				{
					cout<<i;
				}
		}
	}


	return 0;
}