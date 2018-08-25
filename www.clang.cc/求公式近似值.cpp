#include"iostream"
#include"math.h"
using namespace std;
main(){
	int n=1;
	float a=pow(10,-6);
	while(1/n>=a) {
		n+=2;
	}
	cout<<n;
}
