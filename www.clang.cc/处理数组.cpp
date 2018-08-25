#include"iostream"
using namespace std;
main(){
	
	
	char str[80];
	gets(str);
	for(int i=0;str[i]!='\0';i++){
		if(!(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'))
		str[i]=1;
	}
	
	
	for(int i=0;str[i]!='\0';i++){
		if(str[i]!=1)
		cout<<str[i];
	}
}
