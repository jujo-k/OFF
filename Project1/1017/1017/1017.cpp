#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	int a;
	int sh=0;
	int y=0;
	cin>>s;
	cin>>a;
	int len=s.length();
	sh=(s[0]-'0')/a;

	if ((sh!=0 && len>1)||(len==1))
	{
		cout<<sh;
	}

	y=(s[0]-'0')%a;

	for (int i=1;i<len;i++)
	{
		sh=(y*10+s[i]-'0')/a;
		cout<<sh;
		y=(y*10+s[i]-'0')%a;
	}
	cout<<" "<<y;

	return 0;
}

