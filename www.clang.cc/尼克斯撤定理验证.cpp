#include"iostream" 
using namespace std;
//验证尼科彻斯定理，即：任何一个正整数的立方都可以写成一串连续奇数的和。
void getNum(int a){
	int n=a;
	int a1=a*a-a+1; 
	for(int i=1;i<=n;i++){
		cout<<a1<<" 1";
		a1+=2;
	}
}
main(){
	int n=0;
	cin>>n;
	for(int a=0;a<=n;a++){
		
		if(n==(a*(a*a-a+1)+a(a-1))) {
			
		}
		
		
	}
}
