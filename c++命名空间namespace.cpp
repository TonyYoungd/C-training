#include"iostream"
using namespace std;

//c++�������ռ�

//ģ��A��˾
namespace A{
	int x=1;
	void fun(){
		cout<<"A"<<endl;
	}
} 
//ģ��B��˾
namespace B{
	int x=2;
	void fun(){
		cout<<"B"<<endl;
	}
	void fun2(){
		cout<<"2B"<<endl;
	}
} 
using namespace B;
int main(){
	cout<<A::x<<endl; 
	B::fun() ;
	B::fun2();
}
