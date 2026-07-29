/*Написать программу, которая возводит указанное число в указанную степень,
   основание и показатель степени вводятся с клавиатуры;*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	int number, degree;
	int count = 0;
	int result = 1;
	cout << "Введите число: "; cin >> number;
	cout << "Введите степень: "; cin >> degree;

	while (count != degree)
	{
		result = result * number;
		count++;
	}
	if (degree == 0) result = 1;
	cout << number << " в степени " << degree << " равно " << result << endl;
}