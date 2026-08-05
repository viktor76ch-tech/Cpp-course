#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Pointer" << endl << endl;

	int a = 2;
	int* pa = &a;

	cout << a << endl;           //¬ывод переменной 'а' на экран
	cout << &a << endl;          // вз€тие адреса переменной а пр€мо при выводе
	cout << pa << endl;          // ¬ывод адреса переменной 'a' хран€щегос€ в указателе 'p'
	cout << *pa << endl << endl; // ¬ывод значени€ переменной 'a' хран€щегос€ в указателе 'pa'

}