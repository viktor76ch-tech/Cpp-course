#include<iostream>
#include<conio.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_5
//#define TASK_6
#define TASK_7

void main()
{
	setlocale(LC_ALL, "");

#ifdef TASK_1
	int num;
	cout << " ¬ведите число: "; cin >> num;
	cout << endl;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
#endif // TASK_1

#ifdef TASK_2
	int num;
	cout << " ¬ведите число: "; cin >> num;
	cout << endl;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
#endif // TASK_2

#ifdef TASK_3
	int num;
	cout << " ¬ведите число: "; cin >> num;
	cout << endl;
	for (int i = 0; i < num; i++)
	{
		for (int j = i; j < num; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
#endif // TASK_3

#ifdef TASK_4
	int num;
	cout << " ¬ведите число: "; cin >> num;
	cout << endl;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if(j < i) cout << " ";
			else cout << "*";
		}
		cout << endl;
	}
	cout << endl;
#endif // TASK_4

#ifdef TASK_5
	int num;
	cout << " ¬ведите число: "; cin >> num;
	cout << endl;
	for (int i = num-1; i >= 0; i--)
	{
		for (int j = 0; j < num; j++)
		{
			if (j < i) cout << " ";
			else cout << "*";
		}
		cout << endl;
	}
	cout << endl;
#endif // TASK_5

#ifdef TASK_6
	int num;
	cout << " ¬ведите число: "; cin >> num;
	cout << endl;
	for (int i = 0; i < num * 2; i++)
	{
		for (int j = 1; j <= num * 2; j++)
		{
			if (j + i == num || (i >= num && j == num * 2 - i + num)) cout << "/";
			else if (j - i == num + 1 || i - j == num - 1) cout << "\\";
			else cout << " ";
		}
		cout << endl;
	}
	cout << endl;
#endif // TASK_6

#ifdef TASK_7
	int num;
	cout << " ¬ведите число: "; cin >> num;
	cout << endl;
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			cout << (j%2 == i%2 ?  "- " : "+ ");
		}
		cout << endl;
	}
	cout << endl;
#endif // TASK_7
}

/*
 Conditional Ternary Operator

 condition ? value_1 : value_2

 “ернарные операторы можно объедин€ть в цепочку, но следует учитывать,
 что тернарный оператор не отлаживаетс€ и длинные цепочки сложно читать.
*/