#include"iostream"
using namespace std;

//c++的命名空间

//模拟A公司
namespace A{
	int x=1;
	void fun(){
		cout<<"A"<<endl;
	}
} 
//模拟B公司
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
