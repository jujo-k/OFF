#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	int ans[10]={0};
	int count[10]={0};
	int n=0,temp=0;
	scanf("%d ",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d ",&temp);
		if (temp%5==0)
		{
			if (temp%2==0)
			{
				ans[1]+=temp;
				count[1]++;
				
			}
		}
		else if (temp%5==1)
		{
			if (count[2]%2==0){
				ans[2]+=temp;
			}else if (count[2]%2==1){
				ans[2]-=temp;}
			count[2]++;
		}
		else if (temp%5==2){
			count[3]++;
		}
		else if (temp%5==3)
		{
			ans[4]+=temp;
			count[4]++;
		}
		else {
			if (temp>ans[5])
				ans[5]=temp;
			count[5]++;
		}
	}

	if (count[1]==0)
		printf("N ");
	else printf("%d ",ans[1]);

	if (count[2]==0)
		printf("N ");
	else printf("%d ",ans[2]);

	if (count[3]==0)
		printf("N ");
	else printf("%d ",count[3]);

	if (count[4]==0)
		printf("N ");
	else printf("%.1f ",(double)ans[4]/count[4]);

	if (count[5]==0)
		printf("N");
	else printf("%d",ans[5]);

	return 0;
}