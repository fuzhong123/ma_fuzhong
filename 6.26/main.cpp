#include<iostream>
using namespace std;
//�����¶� = �����¶� * 9.0 / 5.0 + 32

int main()
{
	const unsigned short A = 32;
	const double R = 9.0 /5.0;

	double tempIn, tempOut;
	char typeIn, typeOut;

	cout<<"���ԡ�xx.x C�����ߡ�xx.x F�������ĸ�ʽ����һ���¶�:\n\n";
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
		cout << "�������!" << "\n\n";
	}

	cout << "�������κ��ַ���������!\n\n";
	cin.get();


	return 0;
}
