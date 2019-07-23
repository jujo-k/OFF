#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	float a,b;
	float max;
	for (int i=0;i<n;i++)
	{
		scanf("%f%f",&a,&b);
		float ans=sqrt(a*a+b*b);
		max=ans>max?ans:max;
	}
	printf("%.2f",max);
	return 0;
}