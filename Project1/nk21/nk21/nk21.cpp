#include "stdafx.h"
#include <iostream>
using namespace std;

int count(int m,int n){
	int temp=0;
	while (m!=0)
	{
		if (m%10==n)
		{
			temp++;
		}
		m=m/10;
	}
return temp;
}


int main(){
	int a,da,b,db;
	int pa=0,pb=0;
	scanf("%d %d %d %d",&a,&da,&b,&db);
	int numa=0,numb=0;
	numa=count(a,da);
	numb=count(b,db);
	while (numa--)
	{
		pa=pa*10+da;
	}
	while (numb--)
	{
		pb=pb*10+db;
	}
	printf("%d",pa+pb);

	return 0;
}
