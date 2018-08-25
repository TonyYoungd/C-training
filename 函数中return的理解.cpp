#include"iostream"
using namespace std;
//递归函数中return的理解 
int f(int m,int n){
	if(m==1) 	return 1; 
	if(n==1)	return 1;
	return f(--m,n)+f(m,n--);
}
int main(){
	cout<<f(3,4)<<endl;
	return 0;
} 
