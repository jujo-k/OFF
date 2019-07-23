#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	int a,b;
	if (scanf("%d%d",&a,&b))
	{
		if (b==0)
		{
			printf("0 0");
			return 0;
		}else{
			printf("%d %d",a*b,b-1);
		}
	}

		while(scanf("%d%d",&a,&b)==2){
				if (b==0)
				{
					return 0;
				}else{
					printf(" %d %d",a*b,b-1);
				}
	}

	return 0;
}

