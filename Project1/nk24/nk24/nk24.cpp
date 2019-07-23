#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp1(int a,int b){
	return a>b;
}
bool cmp2(int a,int b){
	return a<b;
}

int main(){
	int n=0;
	int a[3]={0},b[3]={0},c[3]={0};
	cin>>n;
	int t=0;
	while(n!=6174){
		int y=n;
		while(y!=0){
			a[t++]=y%10;
			y=y/10;
		}

	for (int i=0;i<3;i++)
	{
		b[i]=a[i];
		c[i]=a[i];
	}
sort(b,b+3,cmp1);
sort(c,c+3,cmp2);
int p,q;
p=b[0]*1000+b[1]*100+b[2]*10+b[3];
q=c[0]*1000+c[1]*100+c[2]*10+c[3];
n=p-q;
printf("%d - %d = %d\n",p,q,n);


	}

	return 0;
}