#include"iostream"
using namespace std;
//����ת��
void BinaryRecursion(int n)//��������Ƶݹ麯�� 
{
	int a;
	a = n % 2; // ȡ��
	n = n >> 1;  //����һλ �൱�ڳ���2
	if(0 != n)
	{
		BinaryRecursion(n);
	}
	cout<<a;
}

int main(){
	int n;
	cin>>n;			//����ʮ���� 
	cout<<hex<<n<<endl;	//���ʮ������ 
	cout<<oct<<n<<endl;	//����˽���
	BinaryRecursion(n); 
	return 0;
} 
