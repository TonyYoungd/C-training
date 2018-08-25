/*
 *	»ù´¡Á·Ï°£¬ ×ÖÄ¸Í¼ÐÎ 
 */ 
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
	int n;
	int m;
    cin >> n >> m;
    char zimubiao[26];
    
    int num = 0;
	for(char c = 'A'; c <= 'Z'; c++)
	{
		zimubiao[num] =	c;
		num++;
	}
    for(int i = 0; i < n; i++)
    {
    	for(int j = 0; j < m; j++)
    	{
    		char a = zimubiao[abs(j -i)];
    		cout<<a;
		}
		cout << endl;
	}
} 
