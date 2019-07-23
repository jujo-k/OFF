#include "stdafx.h"
#include <iostream>
#include<string>
using namespace std;

int main(){
	string s;
	cin>>s;
	int len=s.length();
	int sp=0,sa=0,st=0,se=0,ss=0,stt=0;
	for (int i=0;i<len;i++)
	{
		if (s[i]=='P')
		{
			sp++;
		}else if (s[i]=='A')
		{
			sa++;
		}else if (s[i]=='T')
		{
			st++;
		}else if (s[i]=='e')
		{
			se++;
		}else if (s[i]=='s')
		{
			ss++;
		}else if (s[i]=='t')
		{
			stt++;
		}
	}

for (int i=0;i<len;i++)
{
	if (sp!=0)
	{
		cout<<'P';
		sp--;
		
	}
	if (sa!=0)
	{
		cout<<'A';
		sa--;
	
	}
	if (st!=0)
	{
		cout<<'T';
		st--;
		
	}
	if (se!=0)
	{
		cout<<'e';
		se--;
		
	}
	if (ss!=0)
	{
		cout<<'s';
		ss--;
		
	}
	if (stt!=0)
	{
		cout<<'t';
		stt--;
	
	}

}
	return 0;
}


