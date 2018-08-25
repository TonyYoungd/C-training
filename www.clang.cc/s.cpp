#include"iostream"
#include"math.h"
//´íÎó 
using namespace std;

int pow(int a,int n){
	int end=1;
	for(int i=0;i<n;i++){
		end*=a;
	}
	return end;
}
int getA(int a,int n){
    int  num=0;
	n--;
	for(n;n>=0;n--){
		num+=a*pow(10,n);
	}
	return num;
}
int main(){
	int  a=0,n=0;
	cin>>a>>n;
	if( a>=9 || a<1 || n<1 )
	return 0;
	
	int sum;
	for(int i=1;i<=n;i++){
		sum+=getA(a,i);
	} 
	cout<<sum;
	
	
	
} 
