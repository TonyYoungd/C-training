#include"iostream"
#include<string.h> 
using namespace std;

//复数的结构体运算
struct co{
	float a;
	float b;
};

co add(co a,co b){
	//cout<<a.a+b.a<<"+"<<a.b+b.b<<"i";
	printf("%.2f+%.2fi",a.a+b.a,a.b+b.b);
}
co jian(co a,co b){
	cout<<a.a-b.a<<"+"<<a.b-b.b<<"i";
}
co cheng(co a,co b){
	cout<<a.a*b.a-a.b*b.b<<"+"<<a.a*b.b+a.b*b.a<<"i";
}
co chu(co a,co b){
}
int main(){
	char str1;
	cin>>str1;
	co a,b;
	cin>>a.a>>a.b>>b.a>>b.b;
	switch(str1){
		case '+':add(a,b);	break;
		case '-':jian(a,b);	break;
		case '*':cheng(a,b);break;
		default: break;
		
	}
	return 0;
} 
