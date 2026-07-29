#include<iostream>
using namespace std;

int Sum(int a, int b);   //Прототип функции (Объявление функции - Function declaration)
int Dif(int a, int b);
int Prod(int a, int b);
double Div(int a, int b);

void main()
{
	setlocale(LC_ALL, "");

	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Sum(a, b);    //Исползование функции (Вызоав функции - Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " + " << b << " = " << Dif(a, b) << endl;
	cout << a << " + " << b << " = " << Prod(a, b) << endl;
	cout << a << " + " << b << " = " << Div(a, b) << endl;
}

int Sum(int a, int b)    //Реализация функции (Определение функции - Function definition)
{
	int c = a + b;
	return c;
}

int Dif(int a, int b)
{
	return a - b;
}

int Prod(int a, int b)
{
	return a * b;
}

double Div(int a, int b)
{
	return (double)a / b;
}