#include"iostream"
using namespace std;
//½×³ËÖ®ºÍ 
main(){
	int n;
	cin>>n;
	int mu=1;
	int sum=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			mu*=j;
		}
		sum+=mu;
		mu=1;
	} 
	cout<<sum;
}
