#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

struct mooncake{
	float mount;
	float price;
	float unit;
};

int cmp(mooncake a,mooncake b){
	return a.unit>b.unit;
}

int main(){
	int n,need;
	cin>>n;
	cin>>need;

	mooncake *a =new mooncake [n];

	for (int i=0;i<n;i++)
	{
		cin>>a[i].mount;
	}

	for (int i=0;i<n;i++)
	{
		cin>>a[i].price;
	}

	for (int i=0;i<n;i++)
	{
		a[i].unit=a[i].price/a[i].mount;
	}

	sort(a,a+n,cmp);

	float result=0.0;
	for (int i=0;i<n;i++)
	{
		if (a[i].mount<=need)
		{
			result=result+a[i].price;
		}else{
			result=result+need*a[i].unit;
			break;
		}
		need=need-a[i].mount;
	}

printf("%.2f",result);
return 0;


}