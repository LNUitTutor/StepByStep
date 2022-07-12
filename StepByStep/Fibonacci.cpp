#include "step-procedures.h"

void Fibonacci()
{
	cout << "\n *�������� ����������� ����� Գ�������*\n\n";
	unsigned k;
	cout << "������ ����� (>=2) ���������� �����: "; cin >> k;
	k = (k > 2) ? k : 2;
	long long f_n;
	long long f_n_1 = 1; // ������ ������� �����������
	long long f_n_2 = 1;
	cout << "f(0)=" << f_n_2 << "\nf(1)=" << f_n_1 << '\n';
	for (unsigned n = 2; n <= k; ++n)
	{
		f_n = f_n_1 + f_n_2; // ��������� ����� ���� �����������
		f_n_2 = f_n_1;       // �������� f_n_1 � f_n "��������"
		f_n_1 = f_n;
		cout << "f(" << n << ")=" << f_n << '\n';
	}
	return;
}