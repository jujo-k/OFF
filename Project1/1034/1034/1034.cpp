#include "stdafx.h"
#include <iostream>
using namespace std;


long long gcd(long long t1,long long t2){
	return t2==0?t1:(gcd(t2,t1%t2));
}

long long print(long long m,long long n){
	int flag1 = 0;
	int flag2 = 0;
	if (n == 0) {
		cout << "Inf";

	}
	if (m == 0) {
		cout << 0;
	
	}

	if (m < 0) {
		m = 0 - m;
		flag1 = 1;
	}
	if (n < 0) {
		n = 0 - n;
		flag2 = 1;
	}
	int flag = 0;
	if (flag1 == 1 && flag2 == 1) {
		flag = 0;
	} else if (flag1 == 1 || flag2 == 1) {
		flag = 1;
	}
	if (m == n) {
		if (flag == 1)
			cout << "(-1)";
		else
			cout << "1";

	}

	long long int x = m % n;
	long long int y = m / n;
	if (x == 0) {
		if (flag == 0)
			cout << y;
		else
			cout << "(-" << y << ")";

	} else {
		long long int t1 = m - y * n;
		long long int t2 = n;
		long long int t = gcd(t1, t2);
		t1 = t1 / t;
		t2 = t2 / t;
		if (flag == 1) {
			cout << "(-";
			if (y != 0)
				cout << y << " " << t1 << "/" << t2;
			else
				cout << t1 << "/" << t2;
			cout << ")";
		} else {
			if (y != 0)
				cout << y << " " << t1 << "/" << t2;
			else
				cout << t1 << "/" << t2;
		}
	}
	return 0;
}


void add(long long a1,long long b1,long long a2,long long b2){
		long long m=0,n=0;
		m=a1*b2+a2*b1;
		n=b1*b2;
		print(a1,b1);
		printf(" + ");
		print(a2,b2);
		printf(" = ");
		print(m,n);
		printf("\n");
}
void sub(long long a1,long long b1,long long a2,long long b2){
	long long m=0,n=0;
	m=a1*b2-a2*b1;
	n=b1*b2;
	print(a1,b1);
	printf(" - ");
	print(a2,b2);
	printf(" = ");
	print(m,n);
	printf("\n");
}
void mul(long long a1,long long b1,long long a2,long long b2){
	long long m=0,n=0;
	m=a1*a2;
	n=b1*b2;
	print(a1,b1);
	printf(" * ");
	print(a2,b2);
	printf(" = ");
	print(m,n);
	printf("\n");
}
void div(long long a1,long long b1,long long a2,long long b2){
	long long m=0,n=0;
	m=a1*b2;
	n=b1*a2;
	print(a1,b1);
	printf(" / ");
	print(a2,b2);
	printf(" = ");
	print(m,n);
	printf("\n");
}

int main(){
	long long a1,b1,a2,b2;
	scanf("%lld/%lld %lld/%lld",&a1,&b1,&a2,&b2);
	add(a1,b1,a2,b2);
	sub(a1,b1,a2,b2);
	mul(a1,b1,a2,b2);
	div(a1,b1,a2,b2);
	return 0;
}



