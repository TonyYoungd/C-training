#include<iostream>
#include<string.h>
using namespace std;
//��Ԫ��ϰ
main(){
	char *str=new char[100];
	strcpy(str, "Hello imooc");
	cout<<str<<endl;
	delete []str;
	str=NULL;
} 
