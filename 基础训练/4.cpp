#include"iostream"
#include"string"
using namespace std;
/*十进制转化成十六进制*/
string str_16 = "";


string switch_10_16(int ch)
{
	switch(ch)
	{
		case 0:return"0";break;
        case 1:return"1";break;
        case 2:return"2";break;
        case 3:return"3";break;
        case 4:return"4";break;
        case 5:return"5";break;
        case 6:return"6";break;
        case 7:return"7";break;
        case 8:return"8";break;
        case 9:return"9";break;
        case 10:return"A";break;
        case 11:return"B";break;
        case 12:return"C";break;
        case 13:return"D";break;
        case 14:return"E";break;
        case 15:return"F";break;
	}
}
long long int change(long long int num)
{
	if(num < 16)
	{
		str_16 += switch_10_16(num);
		return 0;
	}
	else
	{
		change(num/16);
		str_16 += switch_10_16(num%16);
	} 
}
int main()
{
	long long str_10;
	cin >> str_10;
	change(str_10);
	cout << str_16 << endl;
	return 0;
}
