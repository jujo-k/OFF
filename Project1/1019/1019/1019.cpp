#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

int cmp1(int a,int b){
	return a>b;
}
int cmp2(int a,int b){
	return a<b;
}

int main(){
	int n;
	cin>>n;

	int a[4]={0};
	int b[4]={0};
	int t=3;
	while(n!=0 && t!=-1){
		a[t--]=n%10;
		n=n/10;
	}
	t=3;

	if (a[0]==a[1] && a[1]==a[2]  && a[2]==a[3]  )
	{
		cout<<a[0]<<a[1]<<a[2]<<a[3]<<" - "<<a[0]<<a[1]<<a[2]<<a[3]<<" = 0000";
		return 0;
	}

	int result=0;
	int temp=0;

	while(result!=6174){
		for (int i=0;i<4;i++)
		{
			b[i]=a[i];
		}
		sort(a,a+4,cmp1);
		sort(b,b+4,cmp2);

		result=a[0]*1000+a[1]*100+a[2]*10+a[3]-b[0]*1000-b[1]*100-b[2]*10-b[3];

		cout<<a[0]<<a[1]<<a[2]<<a[3]<<" - "<<b[0]<<b[1]<<b[2]<<b[3]<<" = "<<result<<endl;

		temp=result;
		for (int i = 0; i < 4; i++) {
			a[i] = 0;
		}
		while(temp!=0 && t!=-1){
			a[t--]=temp%10;
			temp=temp/10;
		}
		t=3;
		//cout << a[0] << a[1] << a[2] << a[3] << endl;
	
	}
	return 0;
}
