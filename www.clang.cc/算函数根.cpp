#include"iostream"
#include"math.h"
using namespace std;
main(){
	int a,b,c;
	float x1,x2;
	cin>>a>>b>>c;
	if((pow(b,2)-4*a*c)<0){
		cout<<"нч╫Б"<<endl;
	}else{
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))/(2*a); 
		
		printf("%.2f ",x1);
		printf("%.2f\n",x2);
	} 

} 
