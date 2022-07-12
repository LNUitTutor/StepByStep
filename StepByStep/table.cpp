#define _USE_MATH_DEFINES   // �������� ���������� ������������ ��������,
#include <math.h>           // ���������� ����������� ������������ �������
#include <iomanip>          // �� ����������� ��������� ���������
#include "step-procedures.h"

using std::setw;
using std::setprecision;

void Table()
{
	cout << "\n *������� ������� ���������������� ������� �� ������� [0;Pi]*\n\n";
	const int n = 12;
	// ������� ����� �������
	cout << "  x     sin x    cos x\n------------------------\n";
	double h = M_PI / n; // ���� ���� ��������� ��������� ���������� ���� ���
	for ( int i = 0; i <= n; ++i) // ���������� � ������� ����� �������
	{
		double x = h * i;
		double sin_x= sin(x);
		double cos_x = cos(x);
		cout << std::showpoint << std::fixed
			<< setw(5) << setprecision(2) << x
			<< setw(9) << setprecision(5) << sin_x
			<< setw(9) << setprecision(5) << cos_x << '\n';
	}
	return;
}