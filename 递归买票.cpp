#include"iostream"
using namespace std;
//��Ʊ����50 100;�ݹ鷽��

int digui(int m,int n){//m-->50 n-->10
	if(n==0){		//ȷ������ 
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
