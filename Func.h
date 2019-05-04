#pragma once
#include "Mass.h"

template <typename T>
void vibor(T)
{
	int size, c;
	cout << "size = ";
	cin >> size;
	Mass<T> op1(size);
	Mass<T> op2(size);
	cout << "Пожалуйста, заполните первый массив:" << endl;
	cin >> op1;
	cout << "Пожалуйста, второй первый массив:" << endl;
	cin >> op2;
	bool flag = true;
	while (flag)
	{
		do
		{
			system("cls");
			cout << "Пожалуйста, выберите действие: \n\n 1 - Сравнить массивы;\n 2 - Массив 1 = Массив 2;\n 3 - Вернуться в меню;\n\n" << endl;
			cin >> c;
			if (cin.fail()) {
				c = -1;
				cin.clear();
				cin.ignore(50, '\n');
			}
		} while (c < 0 || c > 5);
		switch (c)
		{
		case 1:
			system("cls");
			if (op1 == op2) cout << "Массивы совпадают." << endl;
			else  cout << "Массивы не совпадают." << endl;
			break;
		case 2:
			system("cls");
			cout << "Первый массив:" << endl << endl;
			cout << op1;
			cout << endl << "Второй  массив:" << endl << endl;
			cout << op2;
			cout << endl;
			op1 = op2;
			cout << "Первый массив:" << endl << endl;
			cout << op1;
			cout << endl;
			break;
		case 3:
			flag = false;
			break;
		}
		system("pause");
	}
}