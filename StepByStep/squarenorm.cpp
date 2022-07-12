#include <cmath>
#include "step-procedures.h"

void SquareNorm()
{
	cout << "\n *������ ����������� ������ ������� ������ �����*\n\n������ ���������� �����: ";
	unsigned n; cin >> n;
	double sum = 0.0;
	for (unsigned i = 1; i <= n; ++i)
	{
		cout << "������ " << i << "-� �����: ";
		double a; cin >> a;
		sum += a * a;
	}
	sum = std::sqrt(sum / n);
	cout << "������ ����������� = " << sum << '\n';
	return;
}