#include"iostream"
using namespace std;
//ÊıÁĞÌØÕ÷
int main(){
	int n;
	int max;
	int min;
	int sum=0;
	int tmp;
	cin>>n;
	int str[n];
	
	for(int i=0;i<n;i++){
		cin>>str[i];
		sum+=str[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(str[j]>str[j+1]){
				tmp=str[j];
				str[j]=str[j+1];
				str[j+1]=tmp;
			}
		}
	}
	cout<<str[n-1]<<endl<<str[0]<<endl<<sum<<endl;
	return 0;
} 
