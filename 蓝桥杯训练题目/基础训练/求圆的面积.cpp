#include"iostream"
#include<stdio.h>
using namespace std;
//求圆的面积
int main(){
	int r;
	double PI=3.14159265358979323;
	double s;
	cin>>r;
	
	s=PI*r*r;
	printf("%.7f",s);
	return 0;
} 
