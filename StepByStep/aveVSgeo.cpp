#include <cmath>
#include <iomanip>
#include "step-procedures.h"

using std::setw;
using std::setprecision;
using std::fabs;
using std::sqrt;

void AveVsGeo()
{
	cout << "\n *Побудова послідовностей середніх арифметичних геометричних*\n\n";
	unsigned k = 1;
	// початкові члени послідовностей треба прочитати
	double u, v, eps;
	cout << "Введіть a, b, eps: "; cin >> u >> v >> eps;
	cout << "\n  k      x_k         y_k\n----------------------------\n";
	cout << std::showpoint << std::fixed
			<< setw(3) << k
			<< setw(12) << setprecision(5) << u
			<< setw(12) << setprecision(5) << v << '\n';
	while (fabs(u-v) >= eps)
	{
		++k;
		// «старіння» значень
		double p = u;
		double q = v;
		// обчислення нових
		u = (p + q) / 2.0;
		v = sqrt(p * q);
		cout << setw(3) << k
			<< setw(12) << setprecision(5) << u
			<< setw(12) << setprecision(5) << v << '\n';
	}
	return;
}