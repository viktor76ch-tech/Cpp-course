#include"Sort.h"

template<typename T> void Sort(T arr[], const int n)
{
	T boofer;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				boofer = arr[i];
				arr[i] = arr[j];
				arr[j] = boofer;
			}
		}
	}
}
template<typename T> void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T boofer;
	for (int k = 0; k < ROWS; k++)
	{
		for (int m = 0; m < COLS; m++)
		{
			for (int i = k; i < ROWS; i++)
			{
				for (int j = i == k ? m + 1 : 0; j < COLS; j++)
				{
					if (arr[k][m] > arr[i][j])
					{
						boofer = arr[k][m];
						arr[k][m] = arr[i][j];
						arr[i][j] = boofer;
					}
				}
			}
		}
	}
}