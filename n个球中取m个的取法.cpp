#include"iostream"
using namespace std;
//��n������ȥm�������ж����ֲ�ͬ��ȡ��
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
