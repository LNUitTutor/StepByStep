#include "step-procedures.h"

void Succession()
{
	cout << "\n *�������� ��������� ������� �����������*\n\n";
	double m;
	cout << "������ �������� ��������: "; cin >> m;
	int k = 1;
	double a = 1.0; // ������ ������ ���� �����������
	cout << "a(" << k << ")=" << a << '\n';
	while (a <= m)
	{
		++k;
		a = a / k + 0.2 * k + 0.1; // ��������� ���������
		cout << "a(" << k << ")=" << a << '\n';
	}
	cout << "��������� ����� = " << k << '\n';
	return;
}