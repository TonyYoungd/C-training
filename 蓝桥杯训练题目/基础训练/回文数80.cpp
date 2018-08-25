#include"iostream"
using namespace std;
//特殊回文数
int main(){
	int n=0;
	int i=0,j=0,k=0;
	cin>>n;
	for(i=1;i<10;i++){
		for(j=0;j<10;j++){
			for(k=0;k<10;k++){
			if(((float)i+(float)j+(float)k/2)==(float)(n/2)){
					cout<<i<<j<<k<<j<<i<<endl;
				}		
			}
		}
	}
	
	for(i=1;i<10;i++){
		for(j=0;j<10;j++){
			for(k=0;k<10;k++){
				if((i+j+k)==n/2){
					cout<<i<<j<<k<<k<<j<<i<<endl;
				}
			}
		}
	}
	return 0;
} 
