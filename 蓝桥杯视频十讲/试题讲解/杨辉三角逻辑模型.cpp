#include"iostream"
using namespace std;
//杨辉三角形逻辑递归原理

/*
1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
*/


//m->行（从1开始） n-列（从零开始） 
int f(int m,int n){
	if(n==0) return 1;
	if(m==n) return 1;
	return f(m-1,n)+f(m-1,n-1);
}

int main(){
	int level=5;
	for(int i=0;i<=5;i++){
		cout<<f(level,i)<<" ";
	}
	return 0;
} 
