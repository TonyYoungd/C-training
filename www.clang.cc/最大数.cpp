#include"iostream"
#include<stdio.h>
using namespace std;
main(){
	
	int a=0,c=0;
	int b=0;
	int n=1;
	int d=0;
	while(a!=-1){
		cin>>a;
		if(n==1){
			b=a;n++;
		}else{
		if(a>b)
		b=a;
		}
	}
		cout<<b;
	}


