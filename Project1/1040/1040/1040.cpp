#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin>>s;
	int len=s.length();
	int t=0;
	int countpat=0,countt=0,countat=0;

	for (int i=len;i>=0;i--)
	{
		if (s[i]=='T')
		{
			++countt;
		}
		else 	if (s[i]=='A')
		{
			countat += countt;
		}
		else 	if (s[i]=='P')
		{
			countpat += countat;
		}
		
	}
	printf("%d",countpat % (long long)1000000007);
return 0;
}
