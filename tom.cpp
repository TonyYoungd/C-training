#include"iostream"
using namespace std;
//tomÊı

int tom(int a){
	int tom=0;
	while(a!=0){
		tom+=a%10;
		a/=10;
	}
	return tom;
} 
main(){
	int a;
	while(cin>>a){
		cout<<tom(a)<<endl;
	}	
} 
