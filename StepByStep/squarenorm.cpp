#include <cmath>
#include "step-procedures.h"

void SquareNorm()
{
	cout << "\n *Середнє квадратичне заданої кількості дійсних чисел*\n\nВведіть натуральне число: ";
	unsigned n; cin >> n;
	double sum = 0.0;
	for (unsigned i = 1; i <= n; ++i)
	{
		cout << "Введіть " << i << "-е число: ";
		double a; cin >> a;
		sum += a * a;
	}
	sum = std::sqrt(sum / n);
	cout << "Середнє квадратичне = " << sum << '\n';
	return;
}