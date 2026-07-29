
/* 
1. Поменять местами две переменные без использования третьей при помощи побитовых операторов (RAID-5);
2. Пользователь вводит число, в программа выводит на экран треуголник Паскаля заданной глубины;
*/

#include <iostream>
using namespace std;


// #define TASK_1
#define TASK_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef TASK_1
	int a = 5;
	int b = 9;

	cout << a << " " << b << endl;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	cout << a << " " << b << endl;
#endif // TASK_1


#ifdef TASK_2
	int a;
	int b = 0;
	int n = 1;
	cout << "Введите число рядов пирамиды Паскаля: "; cin >> a;
	for (int i = 0; i < a; i++)
	{
		b = i + 1;
		for (int j = 0; j < b; j++)
		{
			if (i == 0 && j == 0) n = 1;

			else n = n * ((i - j) / (j + 1));
			//cout << "   ";
		}
		cout << n << endl;
		/*for (int k = a; k < a * 2; k++) cout << "   " ;
		cout << n << endl;
*/

	}
			/*n = n * ((i - j) / (j + 1));
			cout << n << "\t";*/

#endif // TASK_2

}

