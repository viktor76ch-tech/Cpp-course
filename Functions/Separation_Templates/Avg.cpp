#include"Avg.h"


template<typename T> double Avg(T arr[], const int n)
{
	double avg;
	avg = Sum(arr, n) / n;
	return avg;
}
template<typename T> double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double avg;
	int n = ROWS * COLS;
	avg = Sum(arr, ROWS, COLS) / n;
	return avg;
}