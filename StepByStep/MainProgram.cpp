#include <Windows.h>
#include "step-procedures.h"

int main()
{
	// ������ � ���������� ���������-���������� �����

	SetConsoleOutputCP(1251); // ��������� ��������� ���������
	int answer;
	do
	{
		system("cls");
		cout << "������� �������� ��� �������:\n\n 1 - ������ ����������� ����������� n �����\n"
			<< " 2 - ������ ����������� ����������� ����� �� ������� ����\n 3 - ������� ������� ���������������� �������\n"
			<< " 4 - ��������� ������� �����������\n 5 - ����� Գ�������\n 6 - ���\'���� ��������� �����������\n"
			<< " 7 - ���������� ������\n >>>> ";
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
		default: cout << "�� ���������!\n";
		}
		system("pause");
	}
	while (answer > 0 && answer < 7);
	return 0;
}