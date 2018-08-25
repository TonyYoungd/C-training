#include"iostream"
using namespace std;
//ÎÊÌâ 1491: ½»»»Easy
main(){
	int N,M;
	int a,b;
	int temp;
	int d,e;
	
	cin>>N>>M;
	int str[N];
	
	for(int i=0;i<N;i++){
		cin>>str[i];
	}
	
	for(int num=0;num<M;num++){
	cin>>d>>e;
	for(int i=0;i<N;i++){
		
		
		if(str[i]==d){
			str[i]=e;
			continue;
		}
		
		if(str[i]==e){
			str[i]=d;
		}
	}
	}
	
	for(int i=0;i<N;i++){
		cout<<str[i]<<endl;
	}
}
 
