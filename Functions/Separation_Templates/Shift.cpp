#include"Shift.h"

template<typename T> void ShiftRight(T arr[], const int n, int num)
{
	for (int i = 0; i < num; i++)
	{
		T temp = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = temp;
	}
}
template<typename T> void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int num)
{
	for (int i = 0; i < num; i++)
	{
		T temp = arr[ROWS - 1][COLS - 1];
		for (int j = ROWS - 1; j >= 0; j--)
		{
			for (int k = COLS - 1; (j == 0 ? k > 0 : k >= 0); k--)
			{
				if (k == 0) arr[j][k] = arr[j - 1][COLS - 1];
				else arr[j][k] = arr[j][k - 1];
			}
		}
		arr[0][0] = temp;
	}
}
template<typename T> void ShiftRightCols(T arr[ROWS][COLS], const int ROWS, const int COLS, int num)
{
	for (int j = 0; j < ROWS; j++)
	{
		ShiftRight(arr[j], COLS, num);
	}
}
template<typename T> void ShiftLeft(T arr[], const int n, int num)
{
	for (int i = 0; i < num; i++)
	{
		T temp = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = temp;
	}
}
template<typename T> void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int num)
{
	for (int i = 0; i < num; i++)
	{
		T temp = arr[0][0];
		for (int j = 0; j <= ROWS - 1; j++)
		{
			for (int k = 0; k <= COLS - 1; k++)
			{
				if (k == COLS - 1)	arr[j][k] = arr[j + 1][0];
				else arr[j][k] = arr[j][k + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = temp;
	}
}
template<typename T> void ShiftLeftCols(T arr[ROWS][COLS], const int ROWS, const int COLS, int num)
{
	for (int j = 0; j < ROWS; j++)
	{
		ShiftLeft(arr[j], COLS, num);
	}
}