#include"iostream"
using namespace std;
//×ÖÄ¸Í¼ÐÎ 
int main(){
	int n=0,m=0;
	char a='A';
	cin>>n>>m;
	char str[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			for(int k=0;k<26;k++){
				if(i+k==j||j+k==i){
					str[i][j]=a+k;
					cout<<str[i][j]; 
				}
			}
		}
		cout<<endl;
	}
	
	
	return 0;
} 
