#include"iostream"
using namespace std;
//回文数
int main(){
	int n;
	cin>>n;
	int a=0,b=0,c=0,d=0,e=0,f=0;
	int num=0;
	
	for(int i=10000;i<=99999;i++){
		a = i/10000;
		b = (i/1000) % 10;
		c = (i/100) % 10;
		d = (i/10) % 10;
		e = i%10;
		if(a==e && b==d && a+b+c+d+e==n){
			if(num==0){
				cout<<i;
				num++;
			}else{
				cout<<endl<<i;
				num++;
			}
		}
	}	
	//六位数 
	for(int i=100000;i<=999999;i++){
		a = i/100000;
		b = (i/10000)%10;
		c = (i/1000)%10;
		d = (i/100)%10;
		e = (i/10)%10;
		f = i%10;	
		if(a==f && b==e && c==d && a+b+c+d+e+f==n){
			if(num==0){
				cout<<i; 
				num++;
			}else{
				cout<<endl<<i;
				num++;
			}
		}
	}
	if(num==0){
		cout<<-1;
	}
	return 0;
} 
