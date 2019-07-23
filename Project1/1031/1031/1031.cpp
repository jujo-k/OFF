#include "stdafx.h"
#include<iostream>
#include <string>
using namespace std;

bool fun(string s);
int main(){
	int n;
	cin>>n;
	int count=0;
	for (int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		if(fun(s))
			count++;
	}
	if (count==n)
		cout<<"All passed";
	return 0;
}

bool fun(string s){
	int	a[18];
	int sum=0;
	for (int i=0;i<17;i++)
	{	
		if (!isdigit(s[i]))
		{
			cout<<s<<endl;
			return false;
		}
		a[i]=s[i]-'0';
	}

		if (s[17]=='X')
			a[17]=10;	
		else
			a[17]=s[17]-'0';
			int b[17]={7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
			for (int i=0;i<17;i++)
			{
				sum=sum+a[i]*b[i];
			}
			sum=sum%11;
			 int c[11] = {1, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2};
			 if (c[sum] != a[17]) {
				 for (int i = 0; i < 17; i++) {
					 cout << s[i];
				 }
				 if (a[17] != 10)
					 cout << a[17] << endl;
				 else 
					 cout << "X" << endl;
				 
				 return false;
			 }
			 else 
				 return true;
		
}