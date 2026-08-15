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
	char str[size] = {};
	cout << "Введите предложение: " ;
	cin.getline(str, size);
	cout << "Предложение " << (Is_palindrome(str)? "" : "не") << " палиндром" << endl;
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
	bool yeas_no = false;
	ToUpper(str);
	for (int i = 0; str[i]; i++)
	{
		if(str[i] == ' ') ShiftToLeft(str, i);
	}
	int a = StringLength(str);
	for (int i = 0; i < a; i++, a--)
	{
		if (str[i] == str[a - 1])
		{
			yeas_no = true;
			continue;
		}
		else
		{
			yeas_no = false;
			break;
		}
	}

	return yeas_no;
}