#include "stdafx.h"
#include <iostream>
using namespace std;

void sort(int a[],int n);

int main(){
	int m,n,i,j,count=0,ct=0;
	int a[100];
	int sy[100];
	scanf("%d",&n);

	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sy[i]=1;//��ǹؼ���Ϊ1��������Ϊ0��
	}

	sort(a,n);

	for(i=0;i<n;i++)  
	{  j=a[i];
	while(j!=1)
	{  
		if(j%2)//����
			j=(3*j+1)/2;
		else
			j=j/2;
		for(m=0;m<n;m++)
		{
			if(a[m]==j)//n��A�У�
				sy[m]=0;//���
		}

	}
	}

	for (i=0;i<n;i++){//ͳ���м����ؼ���
		if(sy[i])
			count++;
	}

	for (i=0;i<n;i++){
		if(sy[i]){
			ct++;
			if(ct<count)
				printf("%d ",a[i]);
			else if(ct==count)
				printf("%d",a[i]);
		}
	}
	return 0;
}

void sort(int a[],int n){
	int i=0,j=0,temp;
	for (i=0;i<n;i++){
		for(j=i;j<=n;j++)
		{
			if (a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}