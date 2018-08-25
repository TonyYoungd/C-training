#include"iostream"
using namespace std;

main(){
	int x=0;
	cout<<"请输入一个整数"<<endl;
	cin>>x;
	cout<<"八进制为："<<oct<<x<<endl;
	cout<<"十进制为："<<dec<<x<<endl;
	cout<<"十六进制为："<<hex<<x<<endl;
	
	cout<<"请输入一个bool值(0,1)"<<endl;
	bool y=false;
	cin>>y;
	cout<<boolalpha<<y<<endl;
} 
