#include "stdafx.h"
#include<iostream>
using namespace std;


int main(){
	int n;
	int a[11]={0};
	int count=0,temp=0;
	for (int i=0;i<10;i++)
	{
		cin>>n;
		if (n!=0)
		{
			a[i]=n;
		}
	}
	if (a[0]==10)
	{
		cout<<0;
	}else{
		for (int j=1;j<10;j++)
		{
			if (a[j]!=0)
			{
				cout<<j;
				a[j]--;
				break;
			}
		}
		for (int j=0;j<a[0];j++)
		{
			cout<<0;
		}
		for (int j=1;j<10;j++)
		{
			while (a[j]!=0)
			{
				cout<<j;
				a[j]--;
			}
		}
	}
	return 0;
}

