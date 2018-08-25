#include<iostream>
using namespace std;
//ÄÚ´æ¹ÜÀí
int main(){
	//int *p=new int(20);
	int *p=new int[10];
	if(NULL==p){
		return 0;
	} 
	p[0]=1;
	p[1]=2;
	cout<<p[0]<<endl<<p[1]<<endl;
	delete []p;
	
	//cout<<*p<<endl;
	//delete p;
	p=NULL;
	return 0;
} 
