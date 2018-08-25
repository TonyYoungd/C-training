#include"iostream"
using namespace std;
//售票问题50 100;递归方法
int digui(int m,int n){//m-->50 n-->10
	int kind=0;
	if(m==0||n==0){
		kind=1;
	}else if(m<n){
		kind=0;
	}else{
		digui(m-1,n)+digui(m,n-1);
	}	
	return kind;
} 




int main(){
	int m,n;
	while(cin>>m>>n){
		cout<<digui(m,n)<<endl; 
	}
	
	return 0;
}
