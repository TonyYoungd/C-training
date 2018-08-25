#include<iostream>
using namespace std;
//打印从零到九的整数

//递归 函数 
void f(int n){
	if(n>0)	f(n-1);		//if是出口 
	cout<<n<<endl;
}



void f2(int begin,int end){
		if(begin>end) return;
		cout<<begin<<endl;
		f2(begin+1,end);
}



main(){
	/* 
	//循环 
	for(int i=0;i<10;i++){
		cout<<i<<endl;
	}
	*/
	f(9);
	cout<<endl;
	f2(0,9); 
} 
