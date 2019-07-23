#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	string a,b;
	cin>>a;
	cin>>b;
	int lena=a.length();
	int lenb=b.length();
	char c[80];
	int t=0;
	for (int i=0;i<lena;i++)
	{
		int flag=0;
		for (int j=0;j<lenb;j++)
		{
			if (a[i]==b[j])
			{
				flag=1;
				break;
			}
		}
		if (flag==0)
		{
			if (a[i]>='a'&&a[i]<='z')
			{
				c[t++]=a[i]-32;
			}else 
				c[t++]=a[i];
		}
	}

	for (int i=0;i<t;i++)
	{
		for (int j=i+1;j<t;j++)
		{
			if (c[i]==c[j])
			{
				c[j]='#';
			}
		}
	}

for (int i=0;i<t;i++)
{
	if (c[i]!='#')
	{
				cout<<c[i];
	}

	
}

	return 0;
}
