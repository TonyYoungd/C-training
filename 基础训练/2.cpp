#include<iostream>
#include<string>
using namespace std;
/*
 *����n��ʮ��������������������Ƕ�Ӧ�İ˽�����
 *˼·��
 *	  �Ƚ�ʮ������ת����2���ƣ��ٽ�2����ת����8���� 
 */
int main()
{
	int n;
	cin >> n;
	string  sixTeen[n];
	
	for(int i = 0; i < n; i++)
		cin >> sixTeen[i];
	for(int i = 0; i < n; i++)
	{
		string eight;
		string tow;
		char eig;
		
		//��ʮ������ת���ɶ�����
		for(int j = 0; j < sixTeen[i].length(); j++)
			switch(sixTeen[i][j])
			{
				case '0': tow += "0000"; break;
				case '1': tow += "0001"; break;    
                case '2': tow += "0010"; break;    
                case '3': tow += "0011"; break;    
                case '4': tow += "0100"; break;    
                case '5': tow += "0101"; break;    
                case '6': tow += "0110"; break;    
                case '7': tow += "0111"; break;    
                case '8': tow += "1000"; break;    
                case '9': tow += "1001"; break;    
                case 'A': tow += "1010"; break;    
                case 'B': tow += "1011"; break;    
                case 'C': tow += "1100"; break;    
                case 'D': tow += "1101"; break;    
                case 'E': tow += "1110"; break;    
                case 'F': tow += "1111"; break;    
                default: break;    
			}
		//ת���ɰ˽���
		//����
		int m = tow.length() % 3;
		if(m == 1)
			tow.insert(0,"00");
		else if(m == 2)
			tow.insert(0,"0");
			
		//����ת��
		if(!(tow[0]=='0'&&tow[1]=='0'&&tow[2]=='0'))  
		{  
			eig=(tow[0]-'0')*4+(tow[1]-'0')*2+(tow[2]);  
			eight=eight+eig;  
		}
		for(int k=3;k<tow.length();k=k+3)  
		{  
			if(tow.substr(k,3)=="000")  
			eight+="0";  
			else if(tow.substr(k,3)=="001")  
			eight+="1";  
			else if(tow.substr(k,3)=="010")  
			eight+="2";  
			else if(tow.substr(k,3)=="011")  
			eight+="3";  
			else if(tow.substr(k,3)=="100")  
			eight+="4";   
			else if(tow.substr(k,3)=="101")  
			eight+="5";   
			else if(tow.substr(k,3)=="110")  
			eight+="6";   
			else if(tow.substr(k,3)=="111")  
			eight+="7";   
		}  
		//������յİ˽�����   
		cout<<eight<<endl;  		
	} 
	return 0;
} 
