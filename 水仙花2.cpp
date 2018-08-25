#include"iostream"
#include"math.h"
using namespace std;
//Ë®ÏÉ»¨2
main(){
	int a=0;
	int sum=0;
	int b=0;
	for(a=100;a<1000;a++){
		b=a;
		while(b!=0){
		sum+=pow((b%10),3);
		b/=10;
		}
		if(sum==a)
		cout<<a<<endl;
		sum=0;
		
	}
} 
