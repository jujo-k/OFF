#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
bool prime(int a) {
	int j=int (sqrt((double)a));
	for (int i = 2; i <=j; i++) {
		if(a % i == 0)
			return false;
	}
	return true;
}
int main(){
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	int j=0;
	int a[10000];

	for (int i=1;j<=num2;i++)
	{
		if (prime(i)){
			a[j]=i;		
			j++;
		}	
	}
	int count=0;
	for(int i=num1;i<num2;i++){
			printf("%d",a[i]);
			count++;
			if(count%10!=0)
				printf(" ");
			else
				printf("\n");
	}
	

	printf("%d",a[num2]);
return 0;
}