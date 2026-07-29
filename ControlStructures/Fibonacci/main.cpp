/*
5. ***Вывести на экран ряд Фибоначчи до указанного предела;
6. ***Вывести на экран заданное количество чисел из ряда Фибоначчи;
*/

#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
//#define FIB_1
#define FIB_2

void main()
{
	setlocale(LC_ALL, "");
#if defined FIB_1;
	int fibonacci_1 = 0;
	int fibonacci_2 = 1;
	int fibonacci_res = 0;
	int limit;

	cout << "Введите предел ряда Фибоначчи: "; cin >> limit;

	if (limit == 0)
	{
		cout << "" << endl;
	}
	else if (limit == 1)
	{
		cout << "0" << endl;
	}
	
	else if (limit > 1)
	{
		cout << fibonacci_1  << " " << fibonacci_2 << " ";
		while (fibonacci_res < limit)
		{
			fibonacci_res = fibonacci_1 + fibonacci_2;
			if (fibonacci_res < limit)
			{
				cout << fibonacci_res << " ";
			}
			fibonacci_1 = fibonacci_2;
			fibonacci_2 = fibonacci_res;
		}
		cout << endl;
	}
	else cout << " Введите положительное число" << endl;
#endif

#if defined FIB_2
	int fibonacci_1 = 0;
	int fibonacci_2 = 1;
	int fibonacci_res = 0;
	int count = 0;
	int number;

	cout << "Введите предел ряда Фибоначчи: "; cin >> number;

	if (number == 0)
	{
		cout << "" << endl;
	}
	else if (number == 1)
	{
		cout << "0" << endl;
	}

	else if (number > count)
	{
		cout << fibonacci_1 << " " << fibonacci_2 << " ";
		count = 2;
		while (number > count)
		{
			fibonacci_res = fibonacci_1 + fibonacci_2;
			cout << fibonacci_res << " ";
			fibonacci_1 = fibonacci_2;
			fibonacci_2 = fibonacci_res;
			count++;
		}
		cout << endl;
	}
	else cout << " Введите положительное число" << endl;
#endif
}