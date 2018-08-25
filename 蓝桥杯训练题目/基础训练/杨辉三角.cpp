#include"iostream"
using namespace std;
//Ñî»ÔÈý½Ç
int main(){
	int i,j;
	int n;
	cin>>n;
	int str[n][n];
	for(i=0;i<n;i++){
		
		for(j=0;j<=i;j++){
			if(j==0||j==i)
			str[i][j]=1;
			else{
				str[i][j]=str[i-1][j]+str[i-1][j-1];
			}
			cout<<str[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
} 
