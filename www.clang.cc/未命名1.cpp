#include"iostream"
#include"math.h"
using namespace std;
main(){
	int  n=1;
	bool t=1;
	float sum=0;
	float a=pow(10,-6);
	while((float)1/n>=a) {
		if(t){
			sum+=1/n;
			t=0;
		}else{
			sum-=1/n;
			t=1;
		}
		n+=2;
	}
	cout<<sum;
}
