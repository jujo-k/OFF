#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main(){
	int p[30]={0};
	string s;
	getline(cin,s);
	int len=s.length();

	for (int i=0;i<len;i++)
	{
		if (s[i]>='a'&&s[i]<='z')
		{
			p[s[i]-'a'+1]++;
		}else if (s[i]>='A'&&s[i]<='Z')
		{
			p[s[i]-'A'+1]++;
		}
	}
	int max=0;
	int temp=0;
	for (int i=1;i<=26;i++)
	{
	
		if (p[i]>max)
		{
			max=p[i];
			temp=i;
		}
	}
printf("%c %d",temp+96,max);
	return 0;
}
