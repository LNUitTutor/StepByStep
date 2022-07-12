#define _USE_MATH_DEFINES   // приєднуємо визначення математичних констант,
#include <math.h>           // оголошення стандартних матеамтичних функцій
#include <iomanip>          // та маніпуляторів форматами виведення
#include "step-procedures.h"

using std::setw;
using std::setprecision;

void Table()
{
	cout << "\n *Таблиця значень тригонометричних функцій на проміжку [0;Pi]*\n\n";
	const int n = 12;
	// друкуємо шапку таблиці
	cout << "  x     sin x    cos x\n------------------------\n";
	double h = M_PI / n; // крок зміни аргумента достатньо порахувати один раз
	for ( int i = 0; i <= n; ++i) // обчислюємо і друкуємо рядки таблиці
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