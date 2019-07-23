#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

bool ispreme(int n){
	int m=(int) (sqrt((double)n) );
	for (int i=2;i<=m;i++)
	{
			if (n%i==0)
				return false;
	}
return true;
}
int main(){
	int n;
	cin>>n;
	int num=0,count=0;
	int a[10001];
	for (int i=5;i<=n;i++)
	{
		if (ispreme(i) && ispreme(i-2))
		{
			num++;
		}
	}

cout<<num;

	return 0;
}
