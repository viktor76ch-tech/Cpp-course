//Написать функцию ? ? ? Power(? ? ? ), которая возводит число в степень;

#include<iostream>
using namespace std;

double Power(int n, int d);
void main()
{
	setlocale(LC_ALL, "");

	int num;
	int degree;
	cout << "Введите число: "; cin >> num;
	cout << "Введите степень: "; cin >> degree;
	cout << "Число " << num << " в степени " << degree << " равно " << Power(num, degree) << endl;
}
double Power(int n, int d)
{
	double result = 1;
	if (d == 0) result;
	else if (d > 0)
	{
		for (int i = 1; i <= d; i++)
		{
			result *= n;
		}
	}
	else
	{
		for (int i = -1; i >= d; i--)
		{
			result *= n;
		}
		result = 1 / result;
	}
	return result;
}