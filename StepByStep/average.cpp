#include "step-procedures.h"

void Average()
{
	cout << "\n *������ ����������� ����������� ������ ����� � ����������� ���������*\n\n"
		<<"������ ����������� �����, �� ���������� �����:\n";
	unsigned quantity = 0;
	double sum = 0.0;
	double a; cin >> a; // ������ ���� �����������
	while (a != 0.0)    // �� �� �� �����������?
	{
		sum += a;       // ����������� ���� �� �������
		++quantity;
		cin >> a;       // ��������� ���� �����������
	}
	if (quantity == 0) cout << "����������� ���������� �����\n";
	else cout << "������ ����������� = " << sum / quantity << '\n';
	return;
}