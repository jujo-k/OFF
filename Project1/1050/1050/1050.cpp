#include "stdafx.h"
#include <iostream>
#include <math.h>
#include<algorithm>
using namespace std;

int cmp(int a,int b){
	return a>b;
}

int main(){
	int	s,m,n;
	int a[1001];
	int b[4][5]={0};
	cin>>s;
	int temp= sqrt((double) s);
	for (int i=temp;i>=1;i--)
	{
		if (s%i==0)
		{
			n=i;
			m=s/i;
			break;
		}
	}
	
	for (int i=0;i<s;i++)
	{
		cin>>a[i];
	}

	sort(a,a+s,cmp);
/*	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			b[i][j]=0;
		}
	}*/

	int x=0,y=0;
	int flag=1;
	for (int j=0;j<s;j++)
	{
		b[x][y]=a[j];
		switch(flag){
			case 1:
				if (x+1==n ||b[x+1][y]!=0)
				{
					y++;
					flag=2;
				}else{
					x++;
				}
				break;

			case 2:
				if (y+1==m ||b[x][y+1]!=0)
				{
					x--;
					flag=3;
				}else{
					y++;
				}
				break;

			case 3:
				if (x-1<0 ||b[x-1][y]!=0)
				{
					y--;
					flag=4;
				}else{
					x--;
				}
				break;

			case 4:
				if (y-1<0 ||b[x][y-1]!=0)
				{
					x++;
					flag=1;
				}else{
					y--;
				}
				break;
			default:	break;

		}
	}

for (int i=0;i<n;i++)
{
	cout<<b[0][i];
	for (int j=1;i<m;j++)
	{
		cout<<" "<<b[i][j];
	}
	cout<<endl;
}

	return 0;
}