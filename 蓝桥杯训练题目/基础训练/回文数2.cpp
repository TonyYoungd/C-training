#include"iostream"
using namespace std;
//特殊回文数
int main(){
	int n;
	cin>>n;
	int a,b,c,d,e,f;
	for(int i=10000;i<99999;i++){
		a=i/10000;
		b=(i/1000)%10;
		c=(i/100)%10;
		d=(i/10)%10;
		e=i%10;
		if(a+b+c+d+e==n&&a==e&&b==d)
		cout<<i<<endl;
	}
	
	for(int i=100000;i<999999;i++){
		a=i/100000;
		b=(i/10000)%10;
		c=(i/1000)%10;
		d=(i/100)%10;
		e=(i/10)%10;
		f=i%10; 
		if(a+b+c+d+e+f==n&&a==f&&b==e&&c==d)
		cout<<i<<endl;
	}
	
	return 0;
} 
