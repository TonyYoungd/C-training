#include"iostream"
#include"string.h"
using namespace std;
int main(){
	char str1[10]; 
	cout<<strcmp(str1,"+")<<endl;
	
	char str[10];
	gets(str);
	if(strcmp(str[10],"+")==0){
		cout<<"³É¹¦";
	}
	
	return 0;
}
