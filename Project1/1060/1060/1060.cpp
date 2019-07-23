#include "stdafx.h"
#include<iostream>
#include <algorithm>
using namespace std;


bool cmp(int a,int b){
	return a>b;
}

int main(){
	int e;
	scanf("%d",&e);
	int a[10001];

	for (int i=1;i<=e;i++)
	{
			scanf("%d",&a[i]);
	}
	sort(a+1,a+e+1,cmp);
	int ans=0,p=1;
	while (ans<=e	&&	a[p]>p)
	{
		ans++;
		p++;
	}
	printf("%d",ans);
return 0;
}