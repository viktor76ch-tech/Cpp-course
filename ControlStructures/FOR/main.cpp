/*
1. Написать программу, которая вычисляет факториал числа, введенного с клавиатуры.	DONE
Фактроиал - это произведение ряда чисел от 1 до указанного, например:	5! = 1*2*3*4*5;
2. Написать программу, которая возводит указанное число в указанную степень,		DONE
основание и показатель степени вводятся с клавиатуры;
3. Вывести на экран таблицу ASCII-символов по 16 символов в строке;		DONE
4. Вывести на экран ряд Фибоначчи до указанного предела;				DONE
5. Вывести на экран заданное количество чисел из ряда Фибоначчи;		DONE
6. Вывести на экран ряд простых чисел.									DONE
Простым называется число, которое делится без остатка только на себя и на единицу;
7. Вывести на экран ряд совершенных чисел.
Совершенным называется число, равное сумме всех своих делителей;
8. Вывести на экран таблицу Пифагора;
*/

#pragma warning(disable:4326)  //отключение надоедлевых предупреждений
#include<iostream>
#include<conio.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define FACTORIAL
//#define MY_FACTORIAL
//#define DEGREE
//#define ASCII
//#define MY_ASCII
//#define MY_FIBONACCI
//#define FIBONACCI
//#define FIBONACCI_2
//#define MY_FIBONACCI_2
//#define PRIME_NUMBERS
//#define PERFECT_NUMBERS
#define PYTHAGOREAN_TABLE

void main()
{
	setlocale(LC_ALL, "");

	/*int n = 5;
	for (
		int i = 0;
		i < n;
		i++
		)
	{
		cout << i << "\t";
	}*/

#ifdef FACTORIAL
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	unsigned long long int f = 1;	//factorial
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		//f *= i;
		f = f * i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL


#ifdef MY_FACTORIAL
	FACTORIAL
		bool end = true;
	char yeas;
	do
	{

		int number;
		cout << " Введите число для определения его факториала: "; cin >> number;
		int factorial = 1;

		for (int i = 0; i <= number; i++)
		{
			if (number == 0) { factorial = 1; break; }
			else if (number == 1) { factorial = 1; break; }
			else if (number > 1 && i != 0)
			{
				factorial = factorial * i;
			}
			else;
		}
		cout << " Факториал числа " << number << " - " << factorial << endl << endl;
		cout << " Чтобы продолжить, нажми y, чтобы выйти - нажмите n " << endl << endl; cin >> yeas;
		cout << endl;
		if (yeas == 'y') end = true;
		else end = false;
	} while (end);

#endif // MY_FACTORIAL

#ifdef DEGREE

	double a;	//основание степени
	int n;	//показатель степени
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени:"; cin >> n;
	double N = 1;	//степень
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;

#endif // DEGREE

#ifdef MY_ASCII
	char symbol = 0;
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			cout << symbol << " ";
			symbol++;
		}
		cout << endl;
	}
#endif // MY_ASCII

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		//if ((i & 15) ^ 15)cout << endl;
		//cout << (char)i << " ";
		//(type)value;	//C-like notation (C-подобная форма записи)
		//type(value);	//Functional notation (функциональная форма записи)
		cout << std::hex << (i & 15) << " ";
	}
#endif // ASCII

#ifdef MY_FIBONACCI

	bool end = true;
	char yeas = 'y';
	do
	{

		int number;
		cout << " Введите число - предел для ряда Фибоначчи: "; cin >> number;
		cout << endl;
		int fibonacci_1 = 0;
		int fibonacci_2 = 1;
		int fibonacci_res = 0;

		for (int i = 0; fibonacci_res < number; i++)
		{
			if (i == 0) { cout << fibonacci_1 << " "; fibonacci_res = 1; fibonacci_1 = 1; }
			else if (i == 1) { cout << fibonacci_2 << " " << fibonacci_res << " "; fibonacci_res = 2; }
			else if (i > 1)
			{
				fibonacci_res = fibonacci_1 + fibonacci_2;
				fibonacci_1 = fibonacci_2;
				fibonacci_2 = fibonacci_res;
				if (fibonacci_res < number)	cout << fibonacci_res << " ";
			}
			else;
		}
		cout << endl;
		cout << " Чтобы продолжить, нажми y, чтобы выйти - нажмите n " << endl << endl; cin >> yeas;
		cout << endl;
		if (yeas == 'y') end = true;
		else end = false;
	} while (end);

#endif // MY_FIBONACCI

#ifdef FIBONACCI

	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
		cout << a << "\t";
	cout << endl;
#endif // FIBONACCI

#ifdef MY_FIBONACCI_2
	bool end = true;
	char yeas = 'y';
	do
	{

		int number;
		cout << " Введите число - количество чисел из ряда Фибоначчи: "; cin >> number;
		cout << endl;
		int fibonacci_1 = 0;
		int fibonacci_2 = 1;
		int fibonacci_res = 0;

		for (int i = 1; i <= number; i++)
		{
			if (i == 1) cout << fibonacci_1 << " ";
			else if (i == 2) cout << fibonacci_2 << " ";
			else if (i > 2)
			{
				fibonacci_res = fibonacci_1 + fibonacci_2;
				fibonacci_1 = fibonacci_2;
				fibonacci_2 = fibonacci_res;
				if (i <= number)	cout << fibonacci_res << " ";
			}
			else;
		}
		cout << endl;
		cout << " Чтобы продолжить, нажми y, чтобы выйти - нажмите n " << endl << endl; cin >> yeas;
		cout << endl;
		if (yeas == 'y') end = true;
		else end = false;
	} while (end);

#endif // MY_FIBONACCI_2

#ifdef FIBONACCI_2
	int n;
	cout << "Введите количество членов ряда: "; cin >> n;
	for (long long int i = 0, a = 0, b = 1, c = a + b; i < n; i++, c = (a = b) + (b = c))
		cout << a << "\t";
	cout << endl;

#endif // FIBONACCI_2

#ifdef PRIME_NUMBERS
	int number;
	for (int i = 2; i < 100; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			number = i % j;
			if (number == 0 && j == i) cout << i << endl;
			else if (number == 0 && j != i) break;
			else;
		}
	}

#endif // PRIME_NUMBERS

#ifdef PERFECT_NUMBERS

	int number = 10000;
	int remainder;
	int sum;
	for (int j = 4; j <= number; j++)
	{
		int temp = j;
		sum = 1;

		for (int i = 2; i < j; i++)
		{
			remainder = temp % i;
			if (remainder == 0)
			{
				sum = sum + i;
				//cout << i << endl;
			}
			else;
		}
		if (sum == j)
		{
			cout << sum << " - совершенное число" << endl;
		}
	}


#endif // PERFECT_NUMBERS

#ifdef PYTHAGOREAN_TABLE

	int number = 10000;
	int remainder;
	int sum;
	for (int i = -1; i < 10; i++)
	{
		if (i == -1)
		{
			cout << "\t";
			for (int j = 1; j < 10; j++)
			{
				cout << j << "\t" ;
			}
			cout << endl;
		}
		else if (i == 0)
		{
			for (int k = -1; k < 73; k++)
			{
				cout << "-";
			}
			cout << endl;
		}
		else
		{
			cout << " " << i << "|";
			for (int n = 1; n < 10; n++)
			{
				cout << "\t" << n * i ;
			}
			cout << endl;
		}
	}
	cout << endl << endl << endl;

#endif // PYTHAGOREAN_TABLE
}