#include"iostream"
#define N 4 
using namespace std; 
//≈≈–Ú
main(){
	int str[N];
	int temp;
	for(int i=0;i<N;i++)
	cin>>str[i];
	
	for(int i=0;i<N-1;i++){
		for(int j=0;j<N-i-i;j++){
			if(str[j]>str[j+1]){
				temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			} 
		}
	}
	for(int i=0;i<N-1;i++){
			cout<<str[i]<<" ";
	}
	cout<<str[N];
} 
