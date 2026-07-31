#include"Header.h"
#include"Constants.h"


template<typename T> void FillRand(T arr[], const int n)
{
	int minRand = 0;
	int maxRand = 100;
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand);
		arr[i] /= 100;
	}
}

template<typename T> void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = 0;
	int max = 100;
	min *= 100;
	max *= 100;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (max - min);
			arr[i][j] /= 100;
		}
	}
}

template<typename T> void FillRand(char arr[], const int n, int min, int max)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = (char)(rand() % (max - min));
	}
}