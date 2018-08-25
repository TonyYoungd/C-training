#include"iostream"
using namespace std;
//波动数列动态规划（20%） 
int n,s,a,b;
int num=0;

void dfn(int cur,int all,int id){
	if(id==n){
		if(all==s){
			num++;
			num = num%100000007;
			return;
 		}else{
 			return;
		 }
	}
	dfn(cur+a,all+cur+a,id+1);
	dfn(cur-b,all+cur-b,id+1);
}
int main(){
	long long i,total;
	cin>>n>>s>>a>>b;
	total=s+n*b;
	for(i=s-a*n;i<=total;i++){
		dfn(i,i,1);
	}
	cout<<num;
	return 0;
} 
