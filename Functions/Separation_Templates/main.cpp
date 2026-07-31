#include"Header.h"
#include"Constants.h"
#include"FillRand.h"
#include"FillRand.cpp"
using namespace std;





template<typename T> void Show(T arr[], const int n);
template<typename T> void Show(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T> void Sort(T arr[], const int n);
template<typename T> void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T> T Sum(T arr[], const int n);
template<typename T> T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T> double Avg(T arr[], const int n);
template<typename T> double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T> T MinNum(T arr[], const int n);
template<typename T> T MinNum(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T> T MaxNum(T arr[], const int n);
template<typename T> T MaxNum(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T> void ShiftRight(T arr[], const int n, int num);
template<typename T> void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int num);
template<typename T> void ShiftRightCols(T arr[ROWS][COLS], const int ROWS, const int COLS, int num);
template<typename T> void ShiftLeft(T arr[], const int n, int num);
template<typename T> void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int num);
template<typename T> void ShiftLeftCols(T arr[ROWS][COLS], const int ROWS, const int COLS, int num);

void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n];
	float arr_f[n];
	double arr_d[n];
	char arr_ch[n];
	int num;
	double arr_2d[ROWS][COLS];

	//FillRand(arr, n);
	//Show(arr, n);
	//cout << endl;
	//cout << "Сумма всех элементов массива равна: " << Sum(arr, n) << endl;
	//cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	//cout << "Минимальный элемент массива: " << MinNum(arr, n) << endl;
	//cout << "Максимальный элемент массива: " << MaxNum(arr, n) << endl << endl;
	//cout << "Введите количество элементов для сдвига вправо: "; cin >> num;
	//ShiftRight(arr, n, num);
	//Show(arr, n);
	//cout << "Введите количество элементов для сдвига влево: "; cin >> num;
	//ShiftLeft(arr, n, num);
	//Show(arr, n);

	/*FillRand(arr_f, n);
	Show(arr_f, n);
	cout << endl;
	cout << "Сумма всех элементов массива равна: " << Sum(arr_f, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr_f, n) << endl;
	cout << "Минимальный элемент массива: " << MinNum(arr_f, n) << endl;
	cout << "Максимальный элемент массива: " << MaxNum(arr_f, n) << endl << endl;
	cout << "Введите количество элементов для сдвига вправо: "; cin >> num;
	ShiftRight(arr_f, n, num);
	Show(arr_f, n);
	cout << "Введите количество элементов для сдвига влево: "; cin >> num;
	ShiftLeft(arr_f, n, num);
	Show(arr_f, n);*/

	/*FillRand(arr_d, n);
	Show(arr_d, n);
	cout << endl;
	cout << "Сумма всех элементов массива равна: " << Sum(arr_d, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr_d, n) << endl;
	cout << "Минимальный элемент массива: " << MinNum(arr_d, n) << endl;
	cout << "Максимальный элемент массива: " << MaxNum(arr_d, n) << endl << endl;
	cout << "Введите количество элементов для сдвига вправо: "; cin >> num;
	ShiftRight(arr_d, n, num);
	Show(arr_d, n);
	cout << "Введите количество элементов для сдвига влево: "; cin >> num;
	ShiftLeft(arr_d, n, num);
	Show(arr_d, n);*/

	/*FillRand(arr_ch, n, 32, 126);
	Show(arr_ch, n);
	cout << endl;
	cout << "Введите количество элементов для сдвига вправо: "; cin >> num;
	ShiftRight(arr_ch, n, num);
	Show(arr_ch, n);
	cout << "Введите количество элементов для сдвига влево: "; cin >> num;
	ShiftLeft(arr_ch, n, num);
	Show(arr_ch, n);*/

	FillRand(arr_2d, ROWS, COLS);
	Show(arr_2d, ROWS, COLS);
	cout << endl;
	Sort(arr_2d, ROWS, COLS);
	Show(arr_2d, ROWS, COLS);
	cout << endl;
	cout << "Сумма всех элементов массива равна: " << Sum(arr_2d, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr_2d, ROWS, COLS) << endl;
	cout << "Минимальный элемент массива: " << MinNum(arr_2d, ROWS, COLS) << endl;
	cout << "Максимальный элемент массива: " << MaxNum(arr_2d, ROWS, COLS) << endl << endl;
	cout << "Введите количество элементов для сдвига вправо: "; cin >> num;
	ShiftRight(arr_2d, ROWS, COLS, num);
	Show(arr_2d, ROWS, COLS);
	cout << "Введите количество элементов для сдвига влево: "; cin >> num;
	ShiftLeft(arr_2d, ROWS, COLS, num);
	Show(arr_2d, ROWS, COLS);
}


template<typename T> void Show(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "   ";
	}
	cout << endl;
}
template<typename T> void Show(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
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
template<typename T> T Sum(T arr[], const int n)
{
	T s = 0;
	for (int i = 0; i < n; i++)
	{
		s += arr[i];
	}
	return s;
}
template<typename T> T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T s = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			s += arr[i][j];
		}
	}
	return s;
}
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
template<typename T> T MinNum(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}
template<typename T> T MinNum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j]) min = arr[i][j];
		}
	}
	return min;
}
template<typename T> T MaxNum(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}
template<typename T> T MaxNum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	return max;
}
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