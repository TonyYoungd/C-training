#include"iostream"
using namespace std;


//��һ���ַ���str�����ݵߵ��������������str�ĳ��Ȳ�����100���ַ���
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
	
