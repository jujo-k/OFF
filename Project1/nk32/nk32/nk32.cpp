#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	int a,b,c,sum;
	cin>>a>>b>>c;
	sum=a+b;
	int z[10010]={0};
	int t=0;
	while (sum!=0)
	{
		z[t]=sum%c;
		sum=sum/c;
		t++;
	}
	for (int i=t-1;i>=0;i--)
	{
		printf("%d",z[i]);
	}


	return 0;
}