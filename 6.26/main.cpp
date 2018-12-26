#include<iostream>
using namespace std;
//华氏温度 = 摄氏温度 * 9.0 / 5.0 + 32

int main()
{
	const unsigned short A = 32;
	const double R = 9.0 /5.0;

	double tempIn, tempOut;
	char typeIn, typeOut;

	cout<<"请以【xx.x C】或者【xx.x F】这样的格式输入一个温度:\n\n";
	cin >> tempIn >> typeIn;
	cin.ignore(100,'\n');
	cout << "\n";

	switch( typeIn )
	{
	case 'C':tempOut = tempIn * R +A;typeOut = 'F'; typeIn='C';
		break;
	case 'F':tempOut= (tempIn -A) / R ;typeOut ='C'; typeIn= 'F';
		break;
	default:
		typeOut = 'E';
		break;
	}

	if(typeOut !='E')
	{
		cout<< tempIn << typeIn<<"="<<tempOut<<typeOut<<"\n\n";
	}
	else
	{
		cout << "输入错误!" << "\n\n";
	}

	cout << "请输入任何字符结束程序!\n\n";
	cin.get();


	return 0;
}
