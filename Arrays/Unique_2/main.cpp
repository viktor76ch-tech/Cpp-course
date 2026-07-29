//* В проекте 'Unique2' заполнить двумерный массив уникальными случайными числами;

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int ROWS = 4;
	const int COLS = 4;
	int arr[ROWS][COLS];
	srand(time(NULL));



	arr[0][0] = rand() % (16 - 0);
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = i == 0 ? 1 : 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (16 - 0);

			for (int k = 0; k <= i; k++)
			{
				for (int m = 0; ((k == i) ? (m < j) : (m < COLS)); m++)
				{
					if (arr[k][m] == arr[i][j])
					{
						j--; m = COLS; k = ROWS;
					}
				}
			}
			
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
}