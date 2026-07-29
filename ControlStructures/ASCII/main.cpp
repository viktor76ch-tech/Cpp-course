/*Вывести на экран таблицу ASCII-символов по 16 символов в строке;*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	cout << "\tТаблица ASCII" << endl;

	char symbol = (char)32;
	int count = 0;
	int count_2 = 0;
	while (count_2 != 14)
	{
		while (count != 16)
		{
			cout << symbol << "  ";
			symbol++;
			count++;
		}
		cout << endl;
		count = 0;
		count_2++;
	}
}