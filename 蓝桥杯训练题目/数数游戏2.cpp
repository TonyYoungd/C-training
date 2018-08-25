#include"iostream"
using namespace std;
//正确版数数游戏 
int main(){
	long long  n,k,t;
	while(cin>>n>>k>>t){
		long long x=1,ans=1;  
        long long l=1,r=n;  
        for(int i=1; i<t; i++)  
        {  
            x+=(l+r)*n/2;  
            x=x%k;  
            ans+=x;  
            l=1+i*n;  
            r=n+i*n;  
        }  
        cout<<ans<<endl;  
	}
	return 0;
} 
