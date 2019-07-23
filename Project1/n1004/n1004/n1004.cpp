#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	int len1=s1.length();
	int len2=s2.length();
	int len3=s3.length();
	int len4=s4.length();
	
	int min1=len1<len2?len1:len2;
	int min2=len3<len4?len3:len4;

	int count=1;
	string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	for (int i=0;i<min1;i++)
	{
		if (s1[i]==s2[i] && s1[i]>='A' && s1[i]<='G' && count==1)
		{
				cout<<week[s1[i]-'A']<<" ";
				count++;
		}
	
		if (s1[i]==s2[i] && ( (s1[i]>='A' && s1[i]<='N')||(s1[i]-'0'>0 && s1[i]-'0'<9)) && count==2){
				if (s1[i]-'0'>=0 && s1[i]-'0'<=9)
				{
					cout<<s1[i]-'0'<<":";
				}
				else if (s1[i]>='A' && s1[i]<='N'){
					cout<<s1[i]-'A'+10<<":";
				}
		}
int minu=0;
	for (int i=0;i<min2;i++)
	{
		if (s3[i]==s4[i] && ((s3[i]>='a'&&s3[i]<='z')||(s3[i]>='A'&&s3[i]<='Z')))
		{
			minu=i+1;
			if (minu<10)
			{
				cout<<"0"<<minu<<endl;
			}else if (minu>=10)
			{
				cout <<minu<<endl;
			}
		}
	}


	}






	return 0;
}



