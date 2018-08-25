#include"iostream"
using namespace std;
int main()
{
	int num=0; 
	int number=0;
	int n=0,s=0,a=0,b=0;
	cin>>n>>s>>a>>b;
	int str[n]={0};
	for(int i=0;i<s;i++){
		str[0]=i;
		int sum=0;
		sum+=str[0];
		
		if(sum==s){
			num++;
		}		
	}
	cout<<endl<<num;
	cout<<endl<<number;
	return 0;
}
