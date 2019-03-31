#ifndef Polynomial_H
#define Polynomial_H


#include<iostream>

class Polynomial
{
public:
	Polynomial();//Ĭ�Ϲ��캯��������ʽ�Ĵ�С��10
	Polynomial(int _size);//һ�������Ĺ��캯������ʾ���������
	Polynomial(const Polynomial &poly);//�������캯��
	Polynomial(double* _coefficients,int _size);//�в����Ĺ��캯��
	~Polynomial();//��������
	void tellInfor();//�����Ϣ
	void setcoefficient(int num,double coefficient);//�ı��num��ϵ��Ϊcoefficient
	double getcoefficient(int num);//�õ���num��ϵ��


	Polynomial& operator=(const Polynomial& poly);//��ֵ���������

	//����ʽ�볣��֮���+��-��*�����������,ʹ����Ԫ����
	friend Polynomial operator+(const Polynomial& poly,double num);
	friend Polynomial operator+(double num,const Polynomial& poly);
	friend Polynomial operator-(const Polynomial& poly,double num);
	friend Polynomial operator-(double num,const Polynomial& poly);
	friend Polynomial operator*(const Polynomial& poly,double num);
	friend Polynomial operator*(double num,const Polynomial& poly);

	//����ʽ�����ʽ֮���+��-��*�����������,ʹ����Ԫ����
	friend Polynomial operator+(const Polynomial& p1,const Polynomial& p2);
	friend Polynomial operator-(const Polynomial& p1,const Polynomial& p2);
	friend Polynomial operator*(const Polynomial& p1,const Polynomial& p2);


private:
	double *coefficients;//��̬���飬��ʾ����ϵ��
	int size;//�������ʽ�Ĵ�С
};
#endif // Polynomial_H
