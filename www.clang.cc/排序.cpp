#include"iostream"
using namespace std;
//≈≈–Ú
main(){
	int str[4];
	int temp;
	for(int i=0;i<4;i++)
	cin>>str[i];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3-i;j++){
			if(str[j]>str[j+1]){
				temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			} 
		}
	}
	for(int i=0;i<3;i++){
			cout<<str[i]<<" ";
	}
	cout<<str[3];
} 
