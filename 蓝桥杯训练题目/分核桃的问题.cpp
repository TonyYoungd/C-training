#include"iostream"
using namespace std;
//��С������



/*



С���������Ŀ����������3�������顣���ڽ������춼�ڼӰ��ء�Ϊ����ʿ����С�Ŵ����ÿ���鷢һ�����ң��ݴ����ܲ��ԣ�������Ҫ���ǣ�

1. ����ĺ�������������ͬ

2. �����ڱ�����ƽ�ֺ��ң���Ȼ�ǲ��ܴ���ģ�

3. �����ṩ����1,2��������С��������Լ�ָ����

*/ 
int main(){
	int a=0,b=0,c=0;
	
	while(cin>>a>>b>>c){
		int max;
		if(a>b) max=a;else max=b;
		if(max<c) max=c;
		for(int i=max;i<=a*b*c;i++){
			if(i%a==0&&i%b==0&&i%c==0){
				cout<<i<<endl;
				break;
			}
		} 
	}
	
	return 0;
} 
