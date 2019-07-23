#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	cin>>n;
	int max=0,min=101;
	string xname,xsno,nname,nsno;
	for (int i=0;i<n;i++)
	{
		string name,sno;
		int grade=0;
		cin>>name>>sno>>grade;
		
		if (grade>max)
		{
			max=grade;
			xname=name;
			xsno=sno;
		}
		if (grade<min)
		{
			min=grade;
			nname=name;
			nsno=sno;
		}

	}
cout<<xname<<" "<<xsno<<endl;
cout<<nname<<" "<<nsno<<endl;

	return 0;
}
