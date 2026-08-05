
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
	//Задачу решаем без применения функций и массивов, только с помощью циклов
	//формула определения элемента пирамиды:  n! / ( k! * (n-k)!) 
	// где n - номер строки считая от нуля
	// k - номер ряда считая от нуля

	int n;         //Номер строки пирамиды Паскаля
	int k = 0;     //Номер ряда пирамиды Паскаля
	cout << "Введите число рядов пирамиды Паскаля: "; cin >> n;

	for (int i = 0; i <= n; i++)  //Счетаем строки
	{
		for (int j = 0; j < (n - i); j++)    // Этот for только для выравнивания пирамиды
		{
			cout << "    ";
		}
		for (int k = 0; k <= i; k++)
		{
			int f_n = 1, f_k = 1, f_n_k = 1;

			for (int m = 0; m <= i; m++)
			{
				if (m == 0) f_n = 1;
				else f_n *= m;
			}

			for (int m = 0; m <= k; m++)
			{
				if (m == 0) f_k = 1;
				else f_k *= m;
			}

			for (int m = 0; m <= i - k; m++)
			{
				if (m == 0) f_n_k = 1;
				else f_n_k *= m;
			}

			cout << f_n / (f_k * f_n_k) << "    ";
			cout << "    ";
		}
		cout << endl;


	}
	

#endif // TASK_2

}

