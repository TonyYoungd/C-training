#include"iostream"
using namespace std;
//进制转换
void BinaryRecursion(int n)//输出二进制递归函数 
{
	int a;
	a = n % 2; // 取余
	n = n >> 1;  //右移一位 相当于除以2
	if(0 != n)
	{
		BinaryRecursion(n);
	}
	cout<<a;
}

int main(){
	int n;
	cin>>n;			//输入十进制 
	cout<<hex<<n<<endl;	//输出十六进制 
	cout<<oct<<n<<endl;	//输出八进制
	BinaryRecursion(n); 
	return 0;
} 
