#include"iostream"
using namespace std;
//������ϵķ���


//ƽ������� 
int f(int m,int n){
	if(m==0 || n==0) return 1;
	return f(m-1,n)+f(m,n-1);
}
int main(){
	cout<<f(3,2);
	return 0;
} 
