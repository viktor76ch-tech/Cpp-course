//Написать программу, которая определяет, является ли число палиндромом.
//Число вводит пользователь с клавиатуры.
//Палиндром - это число, которое читается одинаково как слева направо, так и справа налево,
//например: 12321, 1221; 

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	int original_number;
	int revers_number = 0;
	int temp = 0;
	cout << "Введите целое число: "; cin >> original_number;

	int number = original_number;
	while (number != 0)
	{
		temp = number % 10;
		revers_number = revers_number * 10 + temp;
		number = number / 10;
	}
	if (revers_number == original_number) cout << "Число " << original_number << " является палиндромом" << endl;
	else cout << "Число " << original_number << " не палиндром" << endl;
}
