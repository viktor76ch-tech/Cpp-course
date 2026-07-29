#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	int original_namber;
	cout << "Введите номер своего билета: "; cin >> original_namber;

	int first_number = original_namber / 1000;
	int second_number = original_namber % 1000;
	int sum_first_number = 0, sum_second_number = 0;
	int count = 3;
	while (first_number != 0)
	{
		sum_first_number = sum_first_number + first_number % 10;
		first_number = first_number / 10;
		sum_second_number = sum_second_number + second_number % 10;
		second_number = second_number / 10;
	}
	if (sum_first_number == sum_second_number)
	{
		cout << "У вас счастливый билетик" << endl;
	}
	else cout << "У вас несчастливый билетик" << endl;
}