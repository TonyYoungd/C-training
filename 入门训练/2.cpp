#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int r;
	double result;
	double pi = 3.14159265358979323;
	
	cin >> r;
	result = pi * r * r;
	printf("%.7f", result);
	return 0;	
} 
