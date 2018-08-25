 #include"iostream"
using namespace std;
//数组求和的递归方法 
int f(int a[], int begin){
	int i;
	for(i=0;a[i]!='\0';i++);
	if(begin==i) return 0;
	
	int x = f(a,begin+1);
	return x+a[begin];
} 

int main(){
	int sum=0;

	int a[5]={1,2,3,4,5};
	/*
	循环 
	for(int i=0;i<5;i++){
		sum+=a[i];
	}
	cout<<sum<<endl;
	*/
	cout<<f(a,0);
	
	
	
	return 0;
} 
