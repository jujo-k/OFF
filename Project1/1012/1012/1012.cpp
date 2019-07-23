#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	int n;
	int ans[1003]={0},count[1003]={0};
	cin>>n;
	int num;
	while (n--)
	{
		cin>>num;
		if (num%5==0)
		{
			if (num%2==0)
			{
				ans[1]+=num;
				count[1]++;
			}
		}else if (num%5==1)
		{
			if (count[2]%2==0)
			{
				ans[2]+=num;
			}else if (count[2]%2==1)
			{
				ans[2]-=num;
			}
			count[2]++;
		}else if (num%5==2)
		{
			count[3]++;
		}else if (num%5==3)
		{
			ans[4]+=num;
			count[4]++;
		}else if (num%5==4)
		{
			if (num>ans[5])
			{
				ans[5]=num;
				count[5]++;
			}
		}

	}
	if (count[1]==0){	printf("N ");	}else{	printf("%d ",ans[1]);	}
	if (count[2]==0){	printf("N ");	}else{	printf("%d ",ans[2]);	}
	if (count[3]==0){	printf("N ");	}else{	printf("%d ",count[3]);	}
	if (count[4]==0){	printf("N ");	}else{	printf("%.1f ",(float)ans[4]/count[4]);	}
	if (count[5]==0){	printf("N");		}else{	printf("%d",ans[5]);	}

	return 0;
}

