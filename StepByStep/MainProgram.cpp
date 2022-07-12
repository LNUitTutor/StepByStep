#include <Windows.h>
#include "step-procedures.h"

int main()
{
	// Задачі з покроковим введенням-виведенням даних

	SetConsoleOutputCP(1251); // налаштуємо виведення кирилицею
	int answer;
	do
	{
		system("cls");
		cout << "Виберіть програму для запуску:\n\n 1 - Середнє квадратичне послідовності n чисел\n"
			<< " 2 - Середнє арифметичне послідовності чисел до першого нуля\n 3 - Таблиця значень тригонометричних функцій\n"
			<< " 4 - Виведення числової послідовності\n 5 - Числа Фібоначчі\n 6 - Пов\'язані рекурентні послідовності\n"
			<< " 7 - Завершення роботи\n >>>> ";
		cin >> answer;
		system("cls");
		switch (answer)
		{
		case 1: SquareNorm(); break;
		case 2: Average(); break;
		case 3: Table(); break;
		case 4: Succession(); break;
		case 5: Fibonacci(); break;
		case 6: AveVsGeo(); break;
		default: cout << "До побачення!\n";
		}
		system("pause");
	}
	while (answer > 0 && answer < 7);
	return 0;
}