#include"iostream"
using namespace std;
//排列组合的方法


//平地起风雷 
int f(int m,int n){
	if(m==0 || n==0) return 1;
	return f(m-1,n)+f(m,n-1);
}
int main(){
	cout<<f(3,2);
	return 0;
} 
