#include"iostream"
using namespace std;
//在n个球中去m个，求有多少种不同的取法
int f(int n,int m){
	if(n<m)	return 0;
	if(n==m)	return 1;
	if(m==0)	return 1;
	return f(n-1,m-1)+f(n-1,m);
} 
int main(){
	int n=f(10,3);	
	cout<<n<<endl;
	return 0;
} 
