#include"iostream"
using namespace std;
//��4��������ͬ�����֣�����������������ظ�������ɵ����С� 
main(){
	
	int h,b,c,d;
	cin>>h>>b>>c>>d;
	
	int a[4]={h,b,c,d};
	
	for(int i=0;i<4;i++){
		//��һ����
		for(int j=0;j<4;j++){
			//�ڶ�����
			for(int k=0;k<4;k++){
				if(a[i]!=a[j] && a[i]!=a[k] && a[j]!=a[k]&&a[i]!=0){
					cout<<a[i]<<a[j]<<a[k]<<endl;
				}
			} 
		} 
	}
} 
