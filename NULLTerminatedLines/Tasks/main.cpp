#include<iostream>
#include<Windows.h>
using namespace std;

int StringLength(char str[]);                  //возвращает длину строки
void ToUpper(char str[]);                      //переводит строку в верхний регистр
void Print(char str[]);                        //выводит строку на экран
void ToLower(char str[]);                      //переводит строку в нижний регистр
void ShiftToLeft(char str[], int position);    //смещает влево всю строку
char* Shrink(char str[]);                      //Удаляет лишние пробелы из предложения
bool Is_palindrome(const char str[]);                //Проверяет, является ли строка палиндромом
bool Is_int_number(char str[]);                //Проверяет, является ли строка целым десятичным числом
int To_int_number(char str[]);                 //Если строка является целым десятичным числом, возвращает ее числовое значение
bool Is_bin_number(char str[]);                //Проверяет, является ли строка двоичным числом
int Bin_to_dec(char str[]);                    //Если строка является двоичным числом, возвращает ее десятичное значение
bool Is_hex_number(char str[]);            	   //Проверяет, является ли строка шестнадцатеричным числом
int Hex_to_dec(char str[]);                    //Если строка является шестнадцатеричным числом, возвращает ее десятичное значение
bool IsIPaddress(char str[]);                  //Проверяет, является ли строка IP-адресом


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

	/*char str[size] = {};
	cout << "Введите число: ";
	cin.getline(str, size);
	cout << "Введенное число " << To_int_number(str) << endl;
	cout << endl;*/

	/*char str[size] = {};
	cout << "Введите число: ";
	cin.getline(str, size);
	cout << "Введенная надпись " << (Is_bin_number(str) ? "-" : "не") << " двоичное число" << endl;
	cout << endl;*/

	/*char str[size] = {};
	cout << "Введите двоичное число: ";
	cin.getline(str, size);
	cout << "Введено число: " << str <<  " - это " << Bin_to_dec(str) << " в десятичном формате" << endl;
	cout << endl;*/

	/*char str[size] = {};
	cout << "Введите число: ";
	cin.getline(str, size);
	cout << "Введенная надпись " << (Is_hex_number(str) ? "-" : "не") << " шестнадцатиричное число" << endl;
	cout << endl;*/

	/*char str[size] = {};
	cout << "Введите шестнадцатиричное число: ";
	cin.getline(str, size);
	cout << "Введено число: " << str <<  " - это " << Hex_to_dec(str) << " в десятичном формате" << endl;
	cout << endl;*/

	char str[size] = {};
	cout << "Введите число: ";
	cin.getline(str, size);
	cout << "Введенная надпись " << (IsIPaddress(str) ? "-" : "не") << " IP-адрес" << endl;
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
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
		{
			ShiftToLeft(str, i);
			i--;
		}
	}
	return str;
}
bool Is_palindrome(const char str[])
{
	int size = strlen(str);
	char* buffer = new char[size + 1] {};
	for (int i = 0; str[i]; i++) buffer[i] = str[i];
	ToUpper(buffer);
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == ' ') ShiftToLeft(buffer, i);
	}
	int a = StringLength(buffer);
	for (int i = 0; i < a; i++, a--)
	{
		if (str[i] != str[a - 1])return false;
		delete[] buffer;
	}
	delete[] buffer;
	return true;
}
bool Is_int_number(char str[])
{
	bool yeas_no = false;
	for (int i = 0; str[i]; i++)
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
		for (int i = 0; str[i]; i++)
		{
			if (i == 0 && str[0] == '-')continue;
			if (i == 1 && str[0] == '-')
			{
				num = -(str[i] - '0'); continue;
			}
			if (str[0] == '-')
				num = num * 10 - (str[i] - '0');
			else
				num = num * 10 + (str[i] - '0');
		}
	};
	return num;
}
bool Is_bin_number(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] != '0' && str[i] != '1')return false;
	}
	return true;
}
int Bin_to_dec(char str[])
{
	int num = 0;
	if (Is_bin_number(str))
	{
		int n = strlen(str);
		for (int i = 0; str[i]; i++)
		{
			if (str[i] != '0') num += pow(2, n - 1 - i);
		}
		return num;
	}
	return num;

	//Вариант препода
	/*if (!Is_bin_number(str))return ULLONG_MAX;
	unsigned long long int decimal = 0;
	for (int i = 0; str[i]; i++)
	{
		decimal = decimal * 2 + str[i] - '0';
	}
	return decimal;*/
}
bool Is_hex_number(char str[])
{
	bool yeas_no = false;
	for (int i = 0; i < str[i]; i++)
	{
		if (i == 0 && str[i] == '0') { yeas_no = true; continue; }
		else if (i == 1 && (str[i] == 'x' || str[1] == 'X')) { yeas_no = true; continue; }
		else if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F')
			|| (str[i] >= 'a' && str[i] <= 'f')) {
			yeas_no = true; continue;
		}
		else { yeas_no = false; break; }
	}
	return yeas_no;
	// Вариант препода
	/*
		bool isHexNumber(const char str[])
		{
			for (int i = str[0] == '0' && str[1] == 'x' ? 2 : 0; str[i]; i++)
			{
				if ((str[i] <'0' || str[i]>'9') && (str[i]<'A' || str[i]>'F') && (str[i]<'a' || str[i]>'f'))
					return false;
			}
			return true;
		}
	*/
}
int Hex_to_dec(char str[])
{
	if (!Is_hex_number(str))return ULLONG_MAX;
	unsigned long long decimal = 0;
	for (int i = str[0] == '0' && str[1] == 'x' ? 2 : 0; str[i]; i++)
	{
		char hex_digit = str[i];
		if (hex_digit >= '0' && hex_digit <= '9')hex_digit -= '0';
		if (hex_digit >= 'A' && hex_digit <= 'F')(hex_digit -= 'A') += 10;
		if (hex_digit >= 'a' && hex_digit <= 'f')(hex_digit -= 'a') += 10;
		decimal = decimal * 16 + hex_digit;
	}
	return decimal;
}
bool IsIPaddress(char str[])
{
	int n = StringLength(str);
	int counter = 0;
	int num = 0;

	if (n < 7 || n > 16)return false;

	for (int i = 0; str[i]; i++)
	{
		if (i == 0 && (str[i] < '0' || str[i] > '9'))return false;
		if ((str[i] < '0' || str[i] > '9') && str[i] != '.')return false;
		if (str[i] == '.') { counter++; continue; }
	}
	if (counter != 3 || str[n - 1] == '.') return false;

	counter = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = counter; str[j]; j++)
		{
			counter = j;
			if (str[j] == '.') { j++; counter = j; break; }
			num = num * 10 + (str[j] - '0');
		}
		if (num > 255) return false;
		num = 0;
	}
	return true;
			// Вариант препода
		//bool IsIPaddress(const char str[])
		//{
		//	int n = strlen(str);
		//	if (n < 7 || n > 15)return false;
		//	char byte[4] = {};
		//	for (int i = 0, j = 0, points = 0; str[i]; i++)
		//	{
		//		if (str[i] == '.')
		//		{
		//			j = 0;
		//			points++;
		//			if (points > 3)return false;
		//			if (To_int_number(byte) > 255)return false;
		//			continue;
		//		}
		//		byte[j++] = str[i];
		//		if (j > 3)return false;
		//	}
		//	return true;
		//}
}
	


		
