#include "stdafx.h"
#include<iostream>
using namespace std;

int main(){
	int n,num,countb=0;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>num;
		while(num){
			if (num/2)
			{
				num=num-1;
			}else {
				num=num/2;
				countb++;
			}
		}
	cout<<countb<<endl;
	}
	return 0;
}
