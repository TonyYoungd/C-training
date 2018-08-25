#include"iostream"
using namespace std;
//最小公倍数



/*



小张是软件项目经理，他带领3个开发组。工期紧，今天都在加班呢。为鼓舞士气，小张打算给每个组发一袋核桃（据传言能补脑）。他的要求是：

1. 各组的核桃数量必须相同

2. 各组内必须能平分核桃（当然是不能打碎的）

3. 尽量提供满足1,2条件的最小数量（节约闹革命嘛）

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
