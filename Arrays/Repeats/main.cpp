//¬ Solution 'Arrays' добавить проект 'Repeats', и в этом проекте
//есть массив из дес€ти элементов, заполненный случайными числами от 0 до 5.
//Ќужно найти повтор€ющиес€ значени€ в этом массиве, вывести их на экран,
//и дл€ каждого повтор€ющегос€ значени€ вывести на экран количество повторений;

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define TASK_1   //первый вариант решени€
#define TASK_2   //второй вариант решени€


void main()
{
	setlocale(LC_ALL, "");

#ifdef TASK_1
	const int n = 15;
	int arr[n];
	int num;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (0 - 5);
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		int count = 1;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == -1) break;
			if (arr[i] == arr[j])
			{
				count++;
				arr[j] = -1;
			}
		}
		if (count != 1)
			cout << "„исло: " << arr[i] << " повтор€етс€ " << count << " раз" << endl;
	}
#endif // TASK_1

#ifdef TASK_2
	const int n = 15;
	int arr[n];
	int num;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (0 - 5);
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		int count = 0;
		bool t = false;

		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				t = true;
			}
		}
		if (t == true) continue;
		else
		{
			for (int j = i + 1; j < n; j++)
			{
				if (arr[i] == arr[j])
				{
					count++;
				}
			}
			cout << "„исло: " << arr[i] << " встречаетс€ " << ++count << " раз" << endl;
		}
	}
#endif // TASK_2

}