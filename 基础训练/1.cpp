#include<iostream>
using namespace std;

/*
 *��������
 */ 
int main()
{
	int n;
	cin >> n;
	int list[n];
	
	/*��ʼ������*/ 
	for(int i = 0; i < n; i++)
		cin >> list[i];
	for(int i = 0; i < n-1; i++)
		for(int j = i + 1; j < n; j++)
			if(list[i] > list[j])
			{
				int temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
	for(int i = 0; i < n; i++)
		cout << list[i] << " ";	
	return 0;
}
