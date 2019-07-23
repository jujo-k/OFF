#include <iostream>
using namespace std;

int main(){
	int a,b,c,n;
	cin>>a>>b>>n;
	c=a+b;

	if (c==0)
	{
		cout<<0;
		return 0;
	}

	int s[100];
	int i=0;
	while(c!=0){
		s[i]=c%n;
		c=c/n;
		i++;
	}

	for (int j=i-1;j>=0;j--)
	{
		cout<<s[j];
	}
	return 0;
}
