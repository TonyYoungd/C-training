#include<iostream>
using namespace std;
//��ӡ���㵽�ŵ�����

//�ݹ� ���� 
void f(int n){
	if(n>0)	f(n-1);		//if�ǳ��� 
	cout<<n<<endl;
}



void f2(int begin,int end){
		if(begin>end) return;
		cout<<begin<<endl;
		f2(begin+1,end);
}



main(){
	/* 
	//ѭ�� 
	for(int i=0;i<10;i++){
		cout<<i<<endl;
	}
	*/
	f(9);
	cout<<endl;
	f2(0,9); 
} 
