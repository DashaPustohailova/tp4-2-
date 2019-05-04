#include <iostream>
#include <string>
#include "Mass.h"
#include "Func.h"
using namespace std;





int main()
{
	setlocale(LC_ALL, "Rus");
	int c;
	string a = "tp";
	bool flag = true;
	while (flag)
	{
		do
		{
			system("cls");
			cout << "Пожалуйста, выберите тип данных: \n\n 1 - int;\n 2 - char;\n 3 - float;\n 4 - double;\n 5 - char*;\n\n" << endl;
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
			vibor(1);
			break;
		case 2:
			vibor('m');
			break;
		case 3:
			vibor(0.0f);
			break;
		case 4:
			vibor(0.0);
			break;
		case 5:
			vibor(a);
			break;

		}
	
	}
	return 0;
}