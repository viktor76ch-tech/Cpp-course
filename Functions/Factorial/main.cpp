//Написать функцию ? ? ? Factorial(? ? ? ), которая принимает число,
//и возвращает факториал этого числа;

#include<iostream>
using namespace std;

int Power(int n);
void main()
{
	setlocale(LC_ALL, "");

	int num;
	cout << "Введите число: "; cin >> num;
	cout << "Факториал числа " << num << " будет равен " << Power(num) << endl;
}
int Power(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
		cout << i << "! = " << result << endl;
	}
	return result;
}