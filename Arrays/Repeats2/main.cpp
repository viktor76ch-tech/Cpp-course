/***В проекте 'Repeats2' найти повторяющиеся элементы в двумерном массиве, 
   вывести их на экран, и вывести количество повторений для каждого;*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	const int COLS = 4;
	const int ROWS = 4;

	int arr[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 16;
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int count = 0;
			bool t = false;
			for (int k = 0; k <= i; k++)
			{
				for (int m = 0; (k == i ? m < j : m < COLS); m++)
				{
					if (arr[i][j] == arr[k][m])
					{
						t = true;
					}
				}
			}
			if (t == true) continue;
			else
			{
				for (int k = i; k < ROWS; k++)
				{
					for (int m = k == i ? j + 1 : 0; m < COLS; m++)
					{
						if (arr[i][j] == arr[k][m] && t == false)
						{
							count++;
						}
					}
				}
				cout << "Число " << arr[i][j] << " встречается " << ++count << " раз" << endl;
			}
		}
	}

	cout << endl;
}