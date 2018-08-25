#include<iostream>
using namespace std;

//无参函数 
void hello(){
	cout<<"hello world!"<<endl;
}


//有参a+b 
void add(int a,int b){
	cout<<a+b<<endl;
}


//传递已知长度的数组 
void array1(int a[3]){
	int i;
	cout<<"the list of the array1 is :";
	for(i=0;a[i]!='\0';i++){
		cout<<a[i]<<" ";
	}
	int length=i;
	cout<<endl;
	cout<<"The length of the array1 is :"<<length;
	cout<<endl;
}
//传递未知长度的数组 
void array2(int a[]){
	cout<<"The list of the array2 is :" ;
	int i;
	for(i=0;a[i]!='\0';i++)
	cout<<a[i]<<" "; 
	cout<<endl;
	
	
	int length=sizeof(a)/sizeof(a[0]);
	cout<<"The length of the array2 is :"<<length<<endl;
	
	int *p = a[0];
	int iLen = 0;
	while(p != NULL)
	{
    	iLen++;
    	*p++;
	}
	cout<<"The length of the array2 is (while):"<<iLen<<endl;
}

main(){
	int a[3]={4,5,6};
	int b[]={1};
	
	hello();
	add(1,2);
	array1(a);
	array2(b); 
	int length=sizeof(b)/sizeof(b[0]);
	cout<<"The length of the array2 is :"<<length<<endl;
} 
