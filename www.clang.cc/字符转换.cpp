#include"iostream"
using namespace std;
//��Сдת������
main(){
	char str[100];
	gets(str);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]>='A'&&str[i]<='Z'){
			str[i]+=32;
		}
	}
	for(int i=0;str[i]!='\0';i++){
		cout<<str[i];
	}
} 
