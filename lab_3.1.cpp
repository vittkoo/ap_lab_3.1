// Lab_03_1.cpp 
// < ��������� ³���� > 
// ����������� ������ � 3.1 
// ������������, ������ ��������: ������� ���� �����. 
// ������ 7

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;
	double y;
	double A;
	double B;

	cout << "Enter x: "; cin >> x;

	A = x * x * sin(x / 2);

	//����� 1: ������������ � ��������� ����
	if (x <= -5)
		B = atan(exp(x));
	if (x > -5 && x <= 0)
		B = 1 + (x * x * x) / 4;
	if (x > 0)
		B = log(fabs(x)) - (x / 5);

	y = A + B;
	
	cout << "1) y = " << y << endl;



	//�����2: ������������ � ����� ����
	if (x <= -5)
		B = atan(exp(x));
	else
		if (x > -5 && x <= 0)
			B = 1 + (x * x * x) / 4;
		else
			B = log(fabs(x)) - (x / 5);

	cout << "2) y = " << y << endl;

return 0;
}

