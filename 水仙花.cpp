#include"iostream"
#include"math.h"
using namespace std;
main(){
	int a=0,n=0;
	int sum=0;
	cin>>a;
	int b=a;
	while(a!=0){
		sum+=pow((a%10),3);
		a/=10;
		n++;
	}
	if(sum==b&&n==3)
	cout<<1;
	else cout<<0;
}
