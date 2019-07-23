#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);

	if (a.length()==0)
	{
		cout<<b;
		return 0;
	}

	int flag=0;
	int lena=a.length();
	int lenb=b.length();
	for (int i = 0; i < lena; i++) {
		if (a[i] == '+') {
			flag = 1;
			a[i] = '#';
		}
	}

	if(flag) {
		for (int i = 0; i < lenb; i++) {
			if (b[i] >= 'A' && b[i] <= 'Z') {
				b[i] = '#';
			}
		}
	}
	for (int i=0;i<lenb;i++)
	{
		for (int j=0;j<lena;j++)
		{
			if (a[j]==b[i])
			{
				b[i]='#';
			}
			if (a[j]>='A'	&&	a[j]<='Z'	&&	b[i]==a[j]+32){
				b[i]='#';
			}
		}
	}
	int temp=0;
	for (int i=0;i<lenb;i++)
	{
		if (b[i]!='#')
		{
			cout<<b[i];
			temp++;
		}
	}
	if (temp==0)
		cout<<endl;

	return 0;
}
