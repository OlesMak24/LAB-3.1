// Lab_03_1.cpp
// < Makaryshyn, Oles >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 23

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - �������������

	cout << "x = "; cin >> x;

	A = (x * x) + sin((4 * x) / 3);

	// ����� 1: ������������ � ��������� ����
	if (x < -5)
		B = cos(x);
	if (-5 <= x <= 0)
		B = 4 - ((x * x) / 2);
	if (x > 0)
		B = log((x * x) - ((4 * x) / 3));

	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// ����� 2: ������������ � ����� ����
	if (x < -5)
		B = cos(x);
	else
		if (x > 0)
			B = log((x * x) - ((4 * x) / 3));
		else
			B = 4 - ((x * x) / 2);
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}