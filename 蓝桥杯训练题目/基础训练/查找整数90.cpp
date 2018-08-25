#include"iostream"
using namespace std;
//²éÕÒÕûÊý 
int main(){
	int n=0;
	int a;
	int c=0; 
	cin>>n;
	int str[n];
	for(int i=0;i<n;i++){
		cin>>str[i];
	}
	cin>>a;
	for(int j=0;j<n;j++){
		c++;
		if(str[j]==a){
			cout<<c<<endl;
			break;
		}
		if(j==n){
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
