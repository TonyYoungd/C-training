#include"iostream"
using namespace std;
//打印0-9

//参数为n 
void f(int n){
	if(n>0)	f(n-1);
	cout<<n<<endl;
}


//两个参数
void f2(int begin ,int end){
	cout<<begin<<endl;
	if(begin<end) f2(begin+1,end);
}



int main(){
	//循环打印0-9
	//for(int i=0;i<10;i++){
	//	cout<<i<<endl;
	//} 
	
	
	//f(9);
	f2(0,9);
	return 0;
} 
