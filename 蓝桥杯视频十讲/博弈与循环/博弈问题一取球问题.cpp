#include"iostream"
using namespace std;
//�򵥵Ĳ������⣺ȡ������ 
bool f(int n){

	if(n>=1 && f(n-1)==false)	return true;
	if(n>=3 && f(n-3)==false)	return true;
	if(n>=7 && f(n-7)==false)	return true;
	if(n>=8 && f(n-8)==false)	return true;
	
	return false; 
} 
int main(){
	cout<<f(10);
	return 0;
} 
