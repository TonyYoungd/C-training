#include<iostream>
using namespace std;
/*	Fibonacci数列 */

/*

不使用数组 
int main()
{
	int F1 = 1;
	int F2 = 1;
	int n;
	int result;
	
	cin >> n; 
	if(n==1)
	{
		cout << F2;
		return 0;
	}
	if(n==2)
	{
		cout << F2;
		return 0;
	}
	if(n > 2)
	{
		n = n - 2;
	}
	for(int i=0; i<n; i++)
	{
		result = (F1 + F2) % 10007;
		F1 = F2 % 10007;
		F2 = result;
		
	}
	cout << result;
	return 0;	
} 
*/


/*使用数组*/ 
int main()  
{  
    int n;  
    cin>>n;  
        
	int Fid[n+1];  
    Fid[1]=1;  
    Fid[2]=1;  
        
	for(int i=3;i<=n;i++)  
    {  
        Fid[i]=(Fid[i-1]+Fid[i-2])%10007;  
    }  
    cout<<Fid[n]<<endl;  
    return 0;  
}  







 
