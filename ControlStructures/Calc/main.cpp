#include<iostream>
using namespace std;
//#define CALC_1

void main()
{
	setlocale(LC_ALL, "");
#if defined CALC_1
	double number_1;
	double number_2;
	char sign;
	double result;
	cout << "\tПростой калькулятор" << endl;
	cout << "Введите простое выражение: ";
	cin >> number_1 >> sign >> number_2;
	
	if (sign == '+') { result = number_1 + number_2; }
	else if (sign == '-') { result = number_1 - number_2; }
	else if (sign == '*') { result = number_1 * number_2; }
	else if (sign == '/') { result = number_1 / number_2; }
	else cout << "Error: no operition";
	cout << "В результате получим: "<< result <<endl;
#endif

	double a, b;
	char s;
	cout << "Введите арифметическое выражение: "; cin >> a >> s >> b;
	switch (s)
	{
	case '+':cout << a << "+" << b << "=" << a + b << endl; break;
	case '-':cout << a << "-" << b << "=" << a - b << endl; break;
	case '*':cout << a << "*" << b << "=" << a * b << endl; break;
	case '/':cout << a << "/" << b << "=" << a / b << endl; break;
			
	}
}