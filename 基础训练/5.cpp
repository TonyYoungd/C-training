#include<iostream>
using namespace std;
//特殊回文数
int main()
{
	int n;
	cin >> n;
	//五位数
	for(long  i = 10000; i <= 99999; i++)	
	{
		int a = i/10000;                //第一个
        int b = (i - a*10000)/1000;         //第二个
        int c = (i - a*10000 - b*1000)/100;     //第三个
        int d = (i - a*10000 - b*1000 - c*100)/10;  //第四个
        int e = (i - a*10000 - b*1000 - c*100)%10;  //第五个    
        if(a == e && b == d)    //是否为回文数 
            if(a+b+c+d+e == n)  //是否为五位特殊回文数 
                cout << i << endl;
	}
	//六位数 
	for(long  i = 100000; i <= 999999; i++)	
	{
		int a = i/100000;                //第一个
        int b = (i - a*100000)/10000;         //第二个
        int c = (i - a*100000 - b*10000)/1000;     //第三个
        int d = (i - a*100000 - b*10000 - c*1000)/100;  //第四个
        int e = (i - a*100000 - b*10000 - c*1000 - d*100)/10;
        int f = (i - a*100000 - b*10000 - c*1000 - d*100)%10;  //第五个    
        if(a == f && b == e && c == d)    //是否为回文数 
            if(a+b+c+d+e+f == n)  //是否为五位特殊回文数 
                cout << i << endl;
	}
	return 0;	
} 
