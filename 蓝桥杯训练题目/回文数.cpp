#include"iostream"
using namespace std;
int main(){
	int n;
	cin>>n;
	int a,b,c,d,e,f;
	int m=0;
	
	for(int i=10000;i<=99999;i++){
		a=i/10000;
		b=(i/1000)%10;
		c=(i/100)%10;
		d=(i/10)%10;
		e=i%10;
		if(a==e && b==c && a+b+c+d+e==n){
			if(m==0){
				cout<<i;
				}else{
				cout<<endl<<i; 
				}
				m++;
		}
	}
	for(int i=100000;i<=999999;i++){
		a=i/100000;
		b=(i/10000)%10;
		c=(i/1000)%10;
		d=(i/100)%10;
		e=(i/10)%10;
		f=i%10;
		if(a==f && b==e && c==d && a+b+c+d+e+f==n){
			if(m==0){
				cout<<i;
			}else{
				cout<<endl<<i; 
			}
			m++;
		}
	}
	if(m==0)
	cout<<m-1;
	return 0;
} 
