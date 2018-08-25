#include"iostream"
#include<algorithm>
using namespace std;
//sort
int main(){
	int a[20]={2,4,1,23,5,76,0,43,24,65},i;
 	for(i=0;i<20;i++)
 		cout<<a[i]<<" ";
 		cout<<endl;
 	sort(a,a+10);
 	for(i=0;i<20;i++)
 		cout<<a[i]<<" ";
 	return 0;
} 
