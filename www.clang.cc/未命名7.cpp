#include"iostream"
using namespace std;
main(){
	int N;
	while(cin>>N&&N>=1&&N<=100){
		int a[N][N];
		int i,j;
		a[0][0]=1;
		
		for(i=1;i<N;i++){
			a[i][0]=a[i-1][0]+i;
		}
		
		for(j=1;j<N;j++){
			for(i=0;i<N-j;i++){
				a[i][j]=a[i+1][j-1]+1;
			}
		}
		
		for(i=0;i<N;i++){
			for(j=0;j<N-i;j++){
				if(i+j<N-1)
				cout<<a[i][j]<<" ";
				else
				cout<<a[i][j];
			}
			cout<<endl;
		} 
		
		 
	}
} 
