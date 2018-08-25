#include"iostream"
using namespace std;
main(){
	int n;
	int str[40]={1,1};
	cin>>n;
	int j;
	for(int i=0;i<n;i++){
		if(i>1){
			str[i]=str[i-1]+str[i-2];
		}
	}
	
	for(j=0;j<n-1;j++){
		cout<<str[j]<<" ";
	}
	cout<<str[j];
}
