#include"iostream"
using namespace std;
//用筛算法求素数
main(){
	int a[1000];
	int i,j;
	int N;
	
	cin>>N;
	for(i=1;i<=N;i++){
		a[i]=i;
	}
	
	for(i=2;i<=N;i++){
		for(j=i+1;j<=N;j++){
			if(a[j]!=0&&a[i]!=0){
				if(a[j]%a[i]==0)
				a[j]=0;
			}
		}
	}
	
	for(i=2;i<=N;i++){
		if(a[i]!=0)
		cout<<a[i]<<endl;
	}
} 
