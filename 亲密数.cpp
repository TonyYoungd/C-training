#include"iostream"
using namespace std;
//Ç×ÃÜÊı
int get(int x){
	int sum=0;
	for(int i=1;i<x;i++){
		if(x%i==0)
		sum+=i;
	}
	return sum;
}
main(){
	for(int i=0;i<=3000;i++){
		if(get(get(i))==i&&i<get(i))
		cout<<"("<<i<<","<<get(i)<<")"<<" ";
	}
} 
