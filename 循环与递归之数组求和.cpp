#include"iostream"
using namespace std;

void addAll(int a[]){
	int i=0,sum=0;
	for(i=0;a[i]!='\0';i++)
	sum+=a[i];
	cout<<"The length of the array is :"<<i<<endl;
	cout<<"The sum of the array is :" <<sum<<endl; 
	
}




main(){
	int a[]={1,2,3,4,5};
	addAll(a);
}
