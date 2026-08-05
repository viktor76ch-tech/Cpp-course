#include<iostream>
using namespace std;

void Exchange_1(int* a, int* b);  // по указателю
void Exchange_2(int& a, int& b);  // по ссылке
void main()
{
	setlocale(LC_ALL, "");
	int a = 2, b = 3;
	cout << a << "\t" << b << endl;
	Exchange_1(&a, &b);
	cout << a << "\t" << b << endl;
	Exchange_2(a, b);
	cout << a << "\t" << b << endl;
}
void Exchange_1(int* a, int* b)
{
	int buffer = *a;
	*a = *b;
	*b = buffer;
}

void Exchange_2(int& a, int& b)
{
	int buffer = a;
	a = b;
	b = buffer;
}