#include <iostream>
#include <cmath>
using namespace std;
int prime(int number){
	for (int i=2;i<=sqrt(number);i++)
	{
		if (number%i==0)
			return false;
	}
	return true;
}
int main(){
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	int j=1;
	int a[10000];

	for (int i=1;j<=num2;i++)
	{
		if (prime(i)){
				a[j]=i;		
				j++;
		}	
	}
	for(int i=num1;i<num2;i++){
		printf("%d ",a[i]);
	}
	printf("%d",a[num2]);

}