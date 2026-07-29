//Написать программу, которая вычисляет факториал числа, введенного с клавиатуры.
//Фактроиал - это произведение ряда чисел от 0 до указанного, например:
//5!= 1 * 2 * 3 * 4 * 5;

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	int number;
	int count = 1;
	int factorial = 1;
	cout << "\tФакториал" << endl;
	cout << "Введите число: "; cin >> number;

	while (count != (number + 1))
	{
		factorial = factorial * count;
		count++;
	}
	cout << "Факториал числа " << number << " равен " << factorial << endl;
}