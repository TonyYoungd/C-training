#include"iostream"
using namespace std;
//��ӡ0-9

//����Ϊn 
void f(int n){
	if(n>0)	f(n-1);
	cout<<n<<endl;
}


//��������
void f2(int begin ,int end){
	cout<<begin<<endl;
	if(begin<end) f2(begin+1,end);
}



int main(){
	//ѭ����ӡ0-9
	//for(int i=0;i<10;i++){
	//	cout<<i<<endl;
	//} 
	
	
	//f(9);
	f2(0,9);
	return 0;
} 
