#include"iostream"
using namespace std;
//有4个互不相同的数字，输出由其中三个不重复数字组成的排列。 
main(){
	
	int h,b,c,d;
	cin>>h>>b>>c>>d;
	
	int a[4]={h,b,c,d};
	
	for(int i=0;i<4;i++){
		//第一个数
		for(int j=0;j<4;j++){
			//第二个数
			for(int k=0;k<4;k++){
				if(a[i]!=a[j] && a[i]!=a[k] && a[j]!=a[k]&&a[i]!=0){
					cout<<a[i]<<a[j]<<a[k]<<endl;
				}
			} 
		} 
	}
} 
