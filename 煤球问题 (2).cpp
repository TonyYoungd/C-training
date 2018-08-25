#include"iostream"
using namespace std;
//ÃºÇòÎÊÌâ
int main(){
	int sum=1;
	int n;
	cin>>n;
	int str[n+1]={0,1};
	for(int i=2;i<n+1;i++){
		str[i]=str[i-1]+i;
		sum+=str[i];
	}
	cout<<sum;
	return 0;
} 
