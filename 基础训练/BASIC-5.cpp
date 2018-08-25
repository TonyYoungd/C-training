/*
 *基础训练，查找整数 
 */ 
 
#include<iostream>
using namespace std;
int main()
{
	int n;
	int a;
	cin >> n;
	int list[n];
	
	for(int i=0; i < n; i++)
		cin >> list[i];
	cin >> a;
	for(int i=0; i < n; i++)
		if(list[i] == a)
		{
			cout << i+1;
			return 0;
		}
	cout << -1;
	return 0;
} 
