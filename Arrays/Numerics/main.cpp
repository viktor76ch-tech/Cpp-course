/*
В Solution 'Arrays' добавить проект 'Numerics', и в этом проекте,
десятичное число, введенное пользователем с клавиатуры перевести
в двоичную и шестнадцатеричную системы счисления;
*/

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define TASK_1                             // Мое решение
#define TASK_2                               //Решение препода
//#define TAB_ASCII
//#define BINARY
#define HEX


void main()
{
	setlocale(LC_ALL, "");

#ifdef TASK_1

	const int n = 32; // максимально - возможная разрядность двоичного числа 
	bool bin[n] = {}; // этот массив будет хранить разряды двоичного числа
	int hex[n] = {};
	int num;
	int notation;
	int count = 0;
	cout << "Введите число: "; cin >> num;
	cout << "Ввыберите систему счисления: "; cin >> notation;
	if (notation == 2)
	{
		int temp = num;
		for (int i = 0; temp != 0; i++, temp /= 2)
		{
			bin[i] = temp % 2;
			count++;
		}
		for (int i = count - 1; i >= 0; i--)
		{
			cout << bin[i] << " ";
		}
		cout << endl;
	}

	if (notation == 16)
	{
		int temp = num;
		for (int i = 0; temp != 0; i++, temp /= 16)
		{
			bin[i] = temp % 16;
			count++;
		}
		for (int i = count - 1; i >= 0; i--)
		{
			if (bin[i] > 9)
			{
				switch (bin[i])
				{
				case 10: cout << "A"; break;
				case 11: cout << "B"; break;
				case 12: cout << "C"; break;
				case 13: cout << "D"; break;
				case 14: cout << "E"; break;
				case 15: cout << "F"; break;
				}
			}
			else
				cout << bin[i];
		}
		cout << endl;
	}


#endif // TASK_1

#ifdef TASK_2
#ifdef TAB_ASCII
	for (int i = 0; i < 256; i++)
	{
		cout << i << "\t" << (char)i << endl;
	}
#endif // TAB_ASCII


	int decimal;	//эта переменная будет хранить десятичное число, введенное пользователем
	cout << "Введите десятичное число: "; cin >> decimal;

#ifdef BINARY
	const int n = 32;	//максимально-возможная разрядность двоичного числа
	bool binary[n] = {};		//этот массив будет хранить разряды двоичного числа
	int i = 0;
	for (; decimal; decimal >>= 1)
		binary[i++] = decimal & 1;

	for (--i; i >= 0; i--)
	{
		cout << binary[i];
		if (i % 8 == 0)cout << " ";
		if (i % 4 == 0)cout << " ";
	}
	cout << endl;
#endif // BINARY

#ifdef HEX
	const int n = 8;
	char hex[n] = {};
	int i = 0;
	for (; decimal; decimal >>= 4)
	{
		hex[i] = decimal & 15;
		hex[i++] += hex[i] < 10 ? 48 : 55;
	}

	for (--i; i >= 0; i--)
		cout << hex[i];
	//cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
	cout << endl;
#endif // HEX

#endif // TASK_2

}