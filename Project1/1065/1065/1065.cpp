#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int m,n,t;
	int a[10010];
	int b[10010];
	int c[10010]={0};

	scanf("%d ",&n);
	for (int i=1;i<=n*2;i=i+2)
	{
		scanf("%d %d",&a[i],&a[i+1]);
	}
	t=m;
	scanf("%d",&m);

	for (int i=0;i<m;i++)
	{
		scanf("%d ",&b[i]);
		for (int j=1;j<=n*2;j++)
		{
			if (b[i]==a[j])
			{
				if (j%2==1){				
						c[i]=a[j+1];
				}else if (j%2==0){
						c[i]=a[j-1];
				}
			}
		}
		cout<<c[i]<<endl;
	}
cout<<"a"<<endl;

for (int i=1;i<=m;i++)
{
	for (int j=1;j<=m;j++)
	{
		if (c[i]!=0&&c[i]==b[j])
		{
			b[j]=0;
			b[i]=0;
			t=t-2;
		}
	}
}
printf("%d\n",t);
for (int i=1;i<=m;i++)
{
	if (b[i]!=0)
	{
		printf("%d ",b[i]);
	}
}
	return 0;
}
