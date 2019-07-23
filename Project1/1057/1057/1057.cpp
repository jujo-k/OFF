#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin>>s;
	int len=s.length();
	int sum=0;
	for (int i=0;i<len;i++)
	{
		if (s[i]>='a'&&s[i]<='z')
		{
			sum=sum+s[i]-'a'+1;
		}else if (s[i]>='A'&&s[i]<='Z')
		{
			sum=sum+s[i]-'A'+1;
		}
	}
	int l=0,y=0;
	while (sum!=0)
	{
		if (sum%2==0)
		{
			l++;
		}else if (sum%2==1)
		{
			y++;
		}
	}
	printf("d %d",l,y);
	return 0;
}

