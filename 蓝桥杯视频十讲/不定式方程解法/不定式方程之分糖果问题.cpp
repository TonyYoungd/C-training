#include"iostream"
using namespace std;
//����ʽ����֮���ǹ�����
int N=1000*100;
int se(int da[],int a){
	int n=0;
	for(int i=0;i<N;i++){
		if(da[i]==1){
			n++;
			if(n==a)return i-a; 
		}else{
			n=0;
		}
	}
	return -1;
}
int f(int a,int b)//ÿ���ǹ��е��ǹ�����
{
	int da[N]={0};
	for(int i=0;i<=N/a;i++){
		for(int j=0;j<=(N-i*a)/b;j++){
			if(a*i+b*j<N)
				da[a*i+b*j]=1;
		} 
	}
	cout<<se(da,a)<<endl;
 } 
int main(){
	f(4,7);
	return 0;
} 
