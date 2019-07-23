#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	int n;
	double a[4]={0};
	double b[4]={0};
	double c[4]={0};

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i]>>c[i];

		if (a[i]+b[i]>c[i])
		{
			cout<<"Case #"<<i+1<<": true"<<endl;
		} 
		else
		{
			cout<<"Case #"<<i+1<<": false"<<endl;
		}

	}

	return 0;
}
