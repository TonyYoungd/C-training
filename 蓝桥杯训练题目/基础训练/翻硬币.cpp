#include"iostream"
using namespace std;
//矩阵翻硬币 ,超出时间限制 
int main(){
	int num=0;
	int n,m;
	cin>>n>>m;
	int str[n+1][m+1]={0};
	
	
	for(int i=1;i<n+1;i++){
		for(int j=1;j<m+1;j++){
			for(int a=1;a<n+1;a++){
				for(int b=1;b<m+1;b++){
					if(a*i<=n&&b*j<=m)
					str[a*i][b*j]++;
				}
			}			
		}
	}
	for(int i=1;i<n+1;i++){
		for(int j=1;j<m+1;j++){
			if(str[i][j]%2!=0)
			num++;
		}
	}
	cout<<num<<endl;
	return 0;
} 
