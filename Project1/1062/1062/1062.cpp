#include "stdafx.h"
#include <iostream>
using namespace std;

int gbs(int m1,int m2,int k){
	for (int i=1;i<1001;i++)
	{
		int t=m1*i;
		if((t%m2==0)&&(t%k==0)){
			return t;
			break;
		}
	}

}
int gys(int n,int m){
	return m==0?n:gys(m,n%m);
}
int main(){
	int n1,m1,n2,m2,k;
	scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
	if (k==0){
		cout<<"error";
		return 0;
	}
	if (n1*m1<n2*m2)
	{
		swap(n1,n2);
		swap(m1,m2);
	}
	int m=gbs(m1,m2,k);
	int t[1001];
	int p=0;

	n1=n1*(m/m1);
	n2=n2*(m/m2);

	for (int i=n1;i<=n2;i++)
	{
		if (i%(m/k)==0 && gys(i,m)==(m/k) )
		{
			t[p]=i/(m/k);
			p++;
		}
	}
int x=p;
	for (int i=0;i<p;i++)
	{
		printf("%d/%d",t[i],k);
		x--;
		if (x>0)
		{
			printf(" ");
		}
	}

	return 0;
}