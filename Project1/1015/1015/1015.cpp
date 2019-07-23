#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

struct Student{
	int sno;
	int de,cai,sum;
	int flag;
}stu[100010];

bool cmp(Student a,Student b){
	if (a.flag!=b.flag)	return a.flag<b.flag;
	else if (a.sum!=b.sum)	return a.sum>b.sum;
	else if(a.de!=b.de)	return a.de>b.de;
	else 	return a.sno<b.sno;
}

int main(){
	int n,l,h;
	scanf("%d%d%d",&n,&l,&h);
	int m;
	m=n;
	for (int i=0;i<n;i++)
	{
		scanf("%d%d%d",&stu[i].sno,&stu[i].de,&stu[i].cai);
		stu[i].sum=stu[i].de+stu[i].cai;
		
		if (stu[i].de<l	||	stu[i].cai<l)			{stu[i].flag=5;	m--;}
		else if (stu[i].de>=h	&&	stu[i].cai>=h)	stu[i].flag=1;
		else if (stu[i].de>=h	&&	stu[i].cai<h)	stu[i].flag=2;
		else if (stu[i].de>=stu[i].cai)		stu[i].flag=3;
		else	stu[i].flag=4;
	}
		sort(stu,stu+n,cmp);
	
		printf("%d\n",m);
		for (int j=0;j<m;j++)
		{
			printf("%d %d %d\n",stu[j].sno,stu[j].de,stu[j].cai);
		}
	return 0;
}