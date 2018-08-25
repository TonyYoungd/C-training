#include"iostream"
using namespace std;
//小朋友分糖果的问题
bool equal(int a[],int n){
	for(int i=1;i<n;i++){
		if(a[i]!=a[i-1])
			return false;
	}
	return true;
} 
int main(){
	int static count=0;
	int n;
	cin>>n;
	int str[n];
	
	for(int i=0;i<n;i++){
		cin>>str[i];
	}
	
	while(!equal(str,n)){
		for(int i=0;i<n;i++){
			if(i==0){
				str[i]=str[n-1]/2+str[i]/2;
			}else{
				str[i]=str[i-1]/2+str[i]/2;
			}
		}
		for(int j=0;j<n;j++){
			if(str[j]%2!=0){
				str[j]++;
				count++;
			}
		}
	}
	
	cout<<count;
	return 0;
} 
