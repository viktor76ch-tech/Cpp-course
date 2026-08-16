#include<iostream>
#include<Windows.h>
using namespace std;

int StringLength(char str[]);                  //возвращает длину строки
void ToUpper(char str[]);                      //переводит строку в верхний регистр
void Print(char str[]);                        //выводит строку на экран
void ToLower(char str[]);                      //переводит строку в нижний регистр
void ShiftToLeft(char str[], int position);    //смещает влево всю строку
char* Shrink(char str[]);                      //Удаляет лишние пробелы из предложения
bool Is_palindrome(char str[]);                //Проверяет, является ли строка палиндромом
bool Is_int_number(char str[]);                //Проверяет, является ли строка целым десятичным числом
int To_int_number(char str[]);                 //Если строка является целым десятичным числом, возвращает ее числовое значение



void main()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);

	const int size = 256;
	/*char str[size] = {};
	cout << "Введите предложение: ";
	cin.getline(str, size);
	cout << "В предложении " << StringLength(str) << " символов" << endl;
	ToUpper(str);
	Print(str);
	ToLower(str);
	Print(str);*/

	/*char str[size] = "Хорошо     живет  на      свете   Винни  Пух!";
	Shrink(str);
	Print(str);*/

	//char str[size] = "Аргентина манит негра";
	/*char str[size] = {};
	cout << "Введите предложение: " ;
	cin.getline(str, size);
	cout << "Предложение " << (Is_palindrome(str)? "-" : "не") << " палиндром" << endl;*/
	
	/*char str[size] = {};
	cout << "Введите число или не число: " ;
	cin.getline(str, size);
	cout << "Введенная надпись " << (Is_int_number(str)? "-" : "не") << " целое число" << endl;
	cout << endl;*/

	char str[size] = {};
	cout << "Введите число: ";
	cin.getline(str, size);
	cout << "Введенное число " << To_int_number(str) << endl;
	cout << endl;
	main();
}

int StringLength(char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}
void ToUpper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z') str[i] -= ' ';
		else if (str[i] >= 'а' && str[i] <= 'я') str[i] -= ' ';
		else if (str[i] == 'ё') str[i] -= 16;
		else str[i];
	}
}
void ToLower(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z') str[i] += ' ';
		else if (str[i] >= 'А' && str[i] <= 'Я') str[i] += ' ';
		else if (str[i] == 'Ё') str[i] += 16;
		else str[i];
	}
}
void Print(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		cout << str[i];
	}
	cout << endl;
}
void ShiftToLeft(char str[], int position)
{
	for (int j = position; str[j]; j++)
	{
		str[j] = str[j + 1];
	}
}
char* Shrink(char str[])
{
	for (int i = 0; str[i] ; i++)
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
		{
			ShiftToLeft(str, i);
			i--;
		}
	}
	return str;
}
bool Is_palindrome(char str[])
{
	ToUpper(str);
	for (int i = 0; str[i]; i++)
	{
		if(str[i] == ' ') ShiftToLeft(str, i);
	}
	int a = StringLength(str);
	for (int i = 0; i < a; i++, a--)
	{
		if (str[i] != str[a - 1])return false;
	}
	return true;
}
bool Is_int_number(char str[])
{
	bool yeas_no = false;
	for ( int i = 0; str[i]; i++)
	{
		if (i == 0 && str[i] == '-') { yeas_no = true; continue; }
		if (str[i] >= '0' && str[i] <= '9')
		{
			yeas_no = true; continue;
		}
		else { yeas_no = false; break; }
	}
	return yeas_no;
}
int To_int_number(char str[])
{
	int num = 0;
	if (Is_int_number(str))
	{
		for (int i = 0;  str[i]; i++)
		{
			if (i == 0 && str[0] == '-')continue;
			if (i == 1 && str[0] == '-')
			{
				num = -(str[i] - '0'); continue;
			}
			if (str[0] == '-')
			num = num * 10 - (str[i] -'0');
			else
			num = num * 10 + (str[i] -'0');
		}
	};
	return num;
}
