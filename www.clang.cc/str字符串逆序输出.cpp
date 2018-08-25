#include"iostream"
using namespace std;


//将一个字符串str的内容颠倒过来，并输出。str的长度不超过100个字符。
main(){
	int p=0;
	int i;
	char str[100];
	
	gets(str);
	for(i=0;str[i]!='\0';i++){
		p++;
	}
	for(i=p;i>=0;i--){
		cout<<str[i];
	}
}
	
