#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	int n;
	int sum=0;
	int a[90];

	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++)
	{
		
		for (int j=0;j<n;j++)
		{	
			if(i!=j){
				sum=sum+a[i]*10+a[j];
			}
		}
	}

cout<<sum;

	return 0;
}
