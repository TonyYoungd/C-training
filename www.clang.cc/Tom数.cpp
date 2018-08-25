#include"iostream"
using namespace std;
//TomÊı
int sum=0;
int Tom(long long n){	
	if(n!=0){
		 sum+=n%10;
	}else{
		return sum;
	}
	Tom(n/10);
}
int main(){
	long long n;
	int num=0;
	while(cin>>n){
		sum=0;
		if(sum==0){
			cout<<Tom(n);
			num++;
		}else{
			cout<<endl<<sum;
		}
	}
	return 0; 
} 
