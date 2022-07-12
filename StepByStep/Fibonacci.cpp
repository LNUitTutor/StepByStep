#include "step-procedures.h"

void Fibonacci()
{
	cout << "\n *Побудова послідовності чисел Фібоначчі*\n\n";
	unsigned k;
	cout << "Введіть номер (>=2) останнього числа: "; cin >> k;
	k = (k > 2) ? k : 2;
	long long f_n;
	long long f_n_1 = 1; // задали початок послідовності
	long long f_n_2 = 1;
	cout << "f(0)=" << f_n_2 << "\nf(1)=" << f_n_1 << '\n';
	for (unsigned n = 2; n <= k; ++n)
	{
		f_n = f_n_1 + f_n_2; // обчислили новий член послідовності
		f_n_2 = f_n_1;       // значення f_n_1 і f_n "постаріли"
		f_n_1 = f_n;
		cout << "f(" << n << ")=" << f_n << '\n';
	}
	return;
}