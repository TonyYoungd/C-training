#include"iostream"
using namespace std;
//n ��С����վ��һ�š�����Ҫ�����ǰ���ߴӵ͵��ߵ�˳�����У�����ÿ��ֻ�ܽ���λ�����ڵ�����С���ѡ�
//�����������г�ʱ 
int main(){
	long n;
	cin>>n;
	long high[n];
	for(long i=0;i<n;i++){
		cin>>high[i];
	}
	long a[n]={0,1};
	long sum=0;
	long num=0;
	for(long i=1;i<n;i++){
		a[i]=a[i-1]+i;
	}
	for(long i=0;i<n;i++){
		num=0;
		for(long j=0;j<i;j++){
			if(high[j]>high[i]){
				num++;
			}
		}
		for(long j=i+1;j<n;j++){
			if(high[j]<high[i]){
				num++;
			}
		}
		sum+=a[num];
	}
	cout<<sum;
	return 0;
} 
