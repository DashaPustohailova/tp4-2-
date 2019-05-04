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
	cout << "����������, ��������� ������ ������:" << endl;
	cin >> op1;
	cout << "����������, ������ ������ ������:" << endl;
	cin >> op2;
	bool flag = true;
	while (flag)
	{
		do
		{
			system("cls");
			cout << "����������, �������� ��������: \n\n 1 - �������� �������;\n 2 - ������ 1 = ������ 2;\n 3 - ��������� � ����;\n\n" << endl;
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
			if (op1 == op2) cout << "������� ���������." << endl;
			else  cout << "������� �� ���������." << endl;
			break;
		case 2:
			system("cls");
			cout << "������ ������:" << endl << endl;
			cout << op1;
			cout << endl << "������  ������:" << endl << endl;
			cout << op2;
			cout << endl;
			op1 = op2;
			cout << "������ ������:" << endl << endl;
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