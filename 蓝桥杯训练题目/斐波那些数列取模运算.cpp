#include"iostream"
using namespace std;
//菲薄那些数列取模运算 
int main(){
	long long n,m,p;
	cin>>n>>m>>p;
		long long sum=0;
		long long a=n>m?n:m;
		long long b=0;
		long long str[a+1];		
		for(long long i=1;i<a+1;i++){			
			if(i==1||i==2){
				str[i]=1;
				if(i<=n) sum+=str[i];
				if(i==m) b=str[i];	
			}else{
				str[i]=str[i-1]+str[i-2];
				if(i<=n) sum+=str[i];
				if(i==m) b=str[i];		
			}	
		}
		cout<<(sum%b)%p<<endl;	
	return 0;
} 
