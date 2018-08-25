#include"iostream"
using namespace std;
//售票问题50 100;递归方法

int digui(int m,int n){//m-->50 n-->10
	if(n==0){		//确定条件 
		return 1;
	}else if(m<n){
		return 0;
	}else{
		return digui(m-1,n)+digui(m,n-1);
	}	
} 
int main(){
	int m,n;
	while(cin>>m>>n){
		cout<<digui(m,n)<<endl; 
	}
	
	return 0;
}
