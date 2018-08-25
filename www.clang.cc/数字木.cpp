#include"iostream"
using namespace std;
main(){
	char str[100];
	int n=0;
	gets(str);
	for(int i=0;str[i]!='\0';i++) 
	if(str[i]>='a'&&str[i]<'z'||str[i]>='A'&&str[i]<='Z')
	n++;
	cout<<n;
}
