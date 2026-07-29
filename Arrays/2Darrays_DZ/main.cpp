/*

1. В проекте '2Darrays' для двумерного массива найти:
-сумму элементов массива;
-среднее-арифметическое элементов массива;
-минимальное и максимальное значение в массиве;
2. Сдвинуть двумерный массив на заданное число элементов влево и вправо;
3. *Отсортировать двумерный массив в порядке возрастания;
*/

#include<Windows.h>
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define TASK_1
//#define TASK_2
//#define TASK_3
#define TASK_4

void main()
{
	setlocale(LC_ALL, "");

#ifdef TASK_1

	int sum = 0;
	double mean;
	const int ROWS = 5;
	const int COLS = 4;
	int arr[ROWS][COLS];
	int n = ROWS * COLS;
	int max, min;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
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
			sum = sum + arr[i][j];
		}
	}
	cout << endl;
	mean = (double)sum / n;
	cout << "Сумма всех членов массива равна: " << sum << endl;
	cout << "Среднее арифметическое всех членов массива равно: " << mean << endl;
	cout << endl;

	min = arr[0][0];
	max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j]) min = arr[i][j];
			if (max < arr[i][j]) max = arr[i][j];
		}
	}

	cout << "Минимальное число в массиве: " << min << endl;
	cout << "Максимальное число в массиве: " << max << endl;
	cout << endl;

#endif // TASK_1

#ifdef TASK_2

	const int ROWS = 3;
	const int COLS = 3;
	int n = ROWS * COLS;
	int arr[ROWS][COLS] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int num;
	int temp;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;

	}
	cout << "Введите число элементов для сдвига: "; cin >> num;

	do
	{
		cout << endl;

		temp = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 1; j <= COLS; j++)
			{
				if (j == COLS) arr[i][j - 1] = arr[i + 1][0];
				else arr[i][j - 1] = arr[i][j];
			}
		}
		arr[ROWS - 1][COLS - 1] = temp;


		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << arr[i][j] << "\t";
			}
			cout << endl;

		}
		Sleep(1000);
		num--;
	} while (num != 0);


#endif // TASK_2

#ifdef TASK_3

	const int ROWS = 3;
	const int COLS = 3;
	int n = ROWS * COLS;
	int arr[ROWS][COLS] = { { 1, 2, 3 },{ 4, 5, 6 },{ 7, 8, 9 } };
	int num;
	int temp;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;

	}
	cout << "Введите число элементов для сдвига: "; cin >> num;

	do
	{
		cout << endl;

		temp = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS; j >= 0; j--)
			{
				if (j == 0) arr[i][j - 1] = arr[i - 1][COLS - 1];
				else arr[i][j - 1] = arr[i][j - 2];
			}
		}
		arr[0][0] = temp;


		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << arr[i][j] << "\t";
			}
			cout << endl;

		}
		Sleep(1000);
		num--;
	} while (num != 0);


#endif // TASK_3

#ifdef TASK_4

	const int ROWS = 3;
	const int COLS = 3;
	int arr[ROWS][COLS];
	int temp;


	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (100 - 0);
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
			for (int k = i; k < ROWS; k++)
			{
				for (int m = k==i?j+1:0; m < COLS; m++)
				{
					if (arr[i][j] > arr[k][m])
					{
						temp = arr[k][m];
						arr[k][m] = arr[i][j];
						arr[i][j] = temp;
					}
					else;
				}
			}
		}
	}
	cout << endl;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;

	}

#endif // TASK_4

}
