#include "stdafx.h"
#include<iostream>
#include <string>
using namespace std;

int main(){
	string s;
	int a[10]={0};
	int t=0;
	cin>>s;
	int len=s.length();
for (int i=0;i<len;i++)
{
	a[s[i]-'0']++;
}

	for (int i=0;i<10;i++)
	{
		if (a[i]!=0)
		{
			printf("%d:%d\n",i,a[i]);
		}
	}


return 0;
}