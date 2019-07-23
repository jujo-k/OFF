#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

int cmp(int a,int b){
	return a>b;
}

int main(){
	int n;
	int a[1000],a1[1000],a2[1000],a3[1000],a4[1000],a5[1000];
	int t1=0,t2=0,t3=0,t4=0,t5=0;

	scanf("%d ",&n);
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}


	for (int i=0;i<n;i++)
	{
			if (a[i]%5==0&&a[i]%2==0)
			{
				a1[t1++]=a[i];
		
			} 
			else if(a[i]%5==1)
			{
				a2[t2++]=a[i];
			}
			else if(a[i]%5==2)
			{
				a3[t3++]=a[i];
			}
			else if(a[i]%5==3)
			{
				a4[t4++]=a[i];
			}
			else if(a[i]%5==4)
			{
				a5[t5++]=a[i];
			}
	}

			int sum=0;
			if(a1[0]!=0){
				for (int i=0;i<t1;i++)
				{
					sum=sum+a1[i];
				}
				cout<<sum<<" ";
			}else{
				cout<<"N ";
			}
			
			int result2=0;
			if (a2[0]!=0)
			{
				for (int i=0;i<t2;i++)
				{
					if ((i+1)%2==1)
					{
						result2=result2+a2[i];
					} 
					else if ((i+1)%2==0)
					{
						result2=result2-a2[i];
					}
				}
				cout<<result2<<" ";
			} 
			else
			{
				cout<<"N ";
			}

			
			if (a3[0]!=0)
			{
				cout<<t3<<" ";
			} 
			else
			{
				cout<<"N ";
			}

			
			float sum4=0;
			float result4;
			if(a4[0]!=0){
				for (int i=0;i<t4;i++)
				{
					sum4=sum4+a4[i];
				}
				result4=sum4/t4;
				
				printf("%.1f ",result4);
			}else{
				cout<<"N ";
			}


			int result5=0;
			int max=5;
			if(a5[0]!=0){
			sort(a5,a5+t5,cmp);
			cout<<a5[0];

			}else{
				cout<<"N";
			}

	return 0;
}


