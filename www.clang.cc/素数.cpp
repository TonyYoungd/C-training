#include"iostream"
using namespace std;
//ÇóËØÊý
main(){
	int N;
	cin>>N;
	for(int i=1;i<=N;i++){
		for(int j=2;j<i;j++){
			if(i%j==0&&j!=i) continue;
			cout<<i;
		}
	}
} 
