#include"iostream"
using namespace std;
main(){
	int a[3];
	int temp;
	for(int i=0;i<3;i++)
		cin>>a[i];
	for(int j=0;j<2;j++){
		for(int b=1;b<3;b++){
			if(a[j]>a[b])
			{
				temp=a[j];
				a[j]=a[b];
				a[b]=temp;
			}
		}
	}
	cout<<a[2];
}
