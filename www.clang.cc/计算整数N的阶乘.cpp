#include"iostream"
using namespace std;
//计算整数N的阶乘

main(){
	int N;
	int mu=1;
	cin>>N;
	if(N<0||N>12) 
	return 0;
	if(N==0){
		cout<<0; 
		return 0;
	}
	
	for(int i=1;i<=N;i++){
		mu*=i;
	}
	cout<<mu;
	return 0;
} 
