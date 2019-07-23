#include "stdafx.h"
#include <iostream>
using namespace std;

int  main(){
	int temp;
	cin>>temp;
	int awin=0,bwin=0;
	int aa[3]={0};
	int bb[3]={0};
	char a,b;
	for (int i=0;i<temp;i++)
	{

		cin>>a>>b;
		if (a=='C')
		{
			if (b=='J')
			{
				awin++;
				aa[1]++;
			}
			if (b=='B')
			{
				bwin++;
				bb[0]++;
			}
		}


		if (a=='J')
		{
			if (b=='B')
			{
				awin++;
				aa[2]++;
			}
			if (b=='C')
			{
				bwin++;
				bb[1]++;
			}
		}

		if (a=='B')
		{
			if (b=='C')
			{
				awin++;
				aa[0]++;
			}
			if (b=='J')
			{
				bwin++;
				bb[2]++;
			}
		}
	}

	cout<<awin<<" "<<temp-awin-bwin<<" "<<bwin<<endl;
	cout<<bwin<<" "<<temp-awin-bwin<<" "<<awin<<endl;

	int maxa;
	if (aa[0]>=aa[1])
	{
		maxa=0;
		if (aa[0]<aa[2])
		{
			maxa=2;
		}
	}else{
		maxa=1;
		if(aa[1]<aa[2]){
			maxa=2;
		}
	}


	int maxb;
	if (bb[0]>=bb[1])
	{
		maxb=0;
		if (bb[0]<bb[2])
		{
			maxb=2;
		}
	}else{
		maxb=1;
		if(bb[1]<bb[2]){
			maxb=2;
		}
	}

	if (maxa==0)	cout<<"B";
	if(maxa==1)		cout<<"C";
	if(maxa==2)		cout<<"J";
	cout<<" ";
	if (maxb==0)	cout<<"B";
	if(maxb==1)		cout<<"C";
	if(maxb==2)		cout<<"J";

	return 0;
}


