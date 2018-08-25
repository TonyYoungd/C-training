#include"iostream"
#include"stdio.h"
#include"iomanip"
using namespace std;
//算法提高之复数运算
typedef struct complex{
	float a;
	float b;
}def;
complex add(complex a,complex b){
	complex c;
	c.a=a.a+b.a;
	c.b=a.b+b.b;
	return c; 
}
int main(){
	complex a;
	complex b;
	complex c;
	cin>>a.a>>a.b>>b.a>>b.b;
	c=add(a,b);
	printf("%.2f",a->a);
	return 0;
} 
