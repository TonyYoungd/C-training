#include"iostream"
using namespace std;
//字符串的正反链接
main(){
	char str1[50];
	int i=0;
	int j=0;
	
	gets(str1);
	for(i=0;str1[i]!='\0';i++);
	char str2[2*i];
	for(j=0;str1[j]!='\0';j++){
		str2[j]=str1[j];
	}
	for(j;i>=0;j++){
		str2[j]=str1[--i];
	}
	for(int k=0;str2[k]!=0;k++){
		cout<<str2[k];
	}
} 
