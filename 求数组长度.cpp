#include"iostream"
using namespace std;
//How to get arrays' length in c++
main(){
	int a[]={};
	int sum=0;
	int i;
	//using "sizeof()" function get the length of arrays
	
	
	gets(a);
	int length=sizeof(a)/sizeof(a[0]);
	cout<<"The length of the array is :"<<length<<endl;
	for(int i=0;i<length;i++)	sum+=a[i];
	cout<<"The sum of the array is:" <<sum<<endl;
}
 
