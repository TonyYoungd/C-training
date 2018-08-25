#include"iostream"
using namespace std;
//n 个小朋友站成一排。现在要把他们按身高从低到高的顺序排列，但是每次只能交换位置相邻的两个小朋友。
//评测结果：运行超时 
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
