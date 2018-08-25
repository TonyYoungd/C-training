#include"iostream"
using namespace std;
//东东数数字的问题(错误)
int main(){
	long long n=0,k=0,T=0;
	long long sum=0;
	cin >> n >> k >> T;
	long long x=T*n;
	long long str[x]={1};
	 
	for(long long i=1;i<x;i++){
		str[i]=str[i-1]+i;
		if(str[i]>k){
			str[i]=str[i]-13;
		}
		if(i%n==0){
			sum+=str[i];
		}
	}
	
	cout<<sum+1;
	return 0;
} 
