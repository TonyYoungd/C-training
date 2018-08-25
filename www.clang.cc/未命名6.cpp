#include"iostream"
using namespace std;
main(){
	int n;
	int i;
	char string[1000];
	
	cin>>n;
	for(int i=0;i<n;i++){
		gets(string);
		cout<<string<<endl;
	}
	while(cin>>string){
		cout<<endl<<string<<endl;
	}
	
}
