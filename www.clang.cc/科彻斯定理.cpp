#include"iostream"
#include"math.h"
using namespace std;
//�Ȳ����е�Ӧ�� 
//��֤��Ƴ�˹���������κ�һ��������������������д��һ�����������ĺ͡�
void get(int a1,int n){
	 for(int i=0;i<n-1;i++,a1+=2)
	 cout<<a1<<"+";
	 cout<<a1;
}
main(){
	int a;
	int a1=0;
	int n=0;
	cin>>a;
	for(n=1;;n++){
		for(a1=1;a1<pow(a,3);a1=a1+2){
				if(pow(a,3)==(a1*n+n*(n-1))){
				cout<<n<<"*"<<n<<"*"<<n<<"=";
				get(a1,n);
				}	
		}
	}
} 
