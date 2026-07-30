//
//В проекте 'Functions\Arrays' написать следующие функции:
//??? Sum(???);			//Возвращает сумму элементов массива;					DONE
//??? Avg(???);			//Возвращает среднее-арифметическое элементов массива;	DONE
//??? MinValueIn(???);	//Возвращает минимальное значение в массиве;			DONE
//??? MaxValueIn(???);	//Возвращает максимальное значение в массиве;			DONE
//??? ShiftLeft(???);		//Циклически сдвигает массив на заданное количество элементов влево;	DONE
//??? ShiftRight(???);	//Циклически сдвигает массив на заданное количество элементов вправо;	DONE
//
//2. Сделать commit, после чего перегрузить все вышеперечисленные функции для типов:
//float, double и char;


#include<iostream>
using namespace std;
void RandomArr(int a[], const int n);
void RandomArr(float a[], const int n);
void RandomArr(double a[], const int n);
void RandomArr(char a[], const int n);

void ShowArr(int a[], const int n);
void ShowArr(float a[], const int n);
void ShowArr(double a[], const int n);
void ShowArr(char a[], const int n);

int Sum(int a[], const int n);
int Sum(float a[], const int n);
int Sum(double a[], const int n);

double Avg(int a[], const int n);
float Avg(float a[], const int n);
double Avg(double a[], const int n);

int MinValueIn(int a[], const int n);
float MinValueIn(float a[], const int n);
double MinValueIn(double a[], const int n);

int MaxValueIn(int a[], const int n);
float MaxValueIn(float a[], const int n);
double MaxValueIn(double a[], const int n);

void ShiftRight(int a[], const int n, int s);
void ShiftRight(float a[], const int n, int s);
void ShiftRight(double a[], const int n, int s);
void ShiftRight(char a[], const int n, int s);

void ShiftLeft(int a[], const int n, int s);
void ShiftLeft(float a[], const int n, int s);
void ShiftLeft(double a[], const int n, int s);
void ShiftLeft(char a[], const int n, int s);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	float arr_f[n];
	double arr_d[n];
	char arr_ch[n];
	int num;

	RandomArr(arr, n);
	ShowArr(arr, n);
	cout << "Сумма всех членов массива равна: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое массива равно: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(arr, n) << endl;
	cout << "Введите количество смещений в право: "; cin >> num;
	ShiftRight(arr, n, num);
	ShowArr(arr, n);
	cout << "Введите количество смещений в лево: "; cin >> num;
	ShiftLeft(arr, n, num);
	ShowArr(arr, n);
	cout << endl << endl;

	RandomArr(arr_f, n);
	ShowArr(arr_f, n);
	cout << "Сумма всех членов массива равна: " << Sum(arr_f, n) << endl;
	cout << "Среднее арифметическое массива равно: " << Avg(arr_f, n) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(arr_f, n) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(arr_f, n) << endl;
	cout << "Введите количество смещений в право: "; cin >> num;
	ShiftRight(arr_f, n, num);
	ShowArr(arr_f, n);
	cout << "Введите количество смещений в лево: "; cin >> num;
	ShiftLeft(arr_f, n, num);
	ShowArr(arr_f, n);
	cout << endl << endl;

	RandomArr(arr_d, n);
	ShowArr(arr_d, n);
	cout << "Сумма всех членов массива равна: " << Sum(arr_d, n) << endl;
	cout << "Среднее арифметическое массива равно: " << Avg(arr_d, n) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(arr_d, n) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(arr_d, n) << endl;
	cout << "Введите количество смещений в право: "; cin >> num;
	ShiftRight(arr_d, n, num);
	ShowArr(arr_d, n);
	cout << "Введите количество смещений в лево: "; cin >> num;
	ShiftLeft(arr_d, n, num);
	ShowArr(arr_d, n);
	cout << endl << endl;

	RandomArr(arr_ch, n);
	ShowArr(arr_ch, n);
	cout << "Введите количество смещений в право: "; cin >> num;
	ShiftRight(arr_ch, n, num);
	ShowArr(arr_ch, n);
	cout << "Введите количество смещений в лево: "; cin >> num;
	ShiftLeft(arr_ch, n, num);
	ShowArr(arr_ch, n);
	cout << endl << endl;
}

void RandomArr(int a[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (100 - 0);
	}
}
void RandomArr(float a[], const int n)
{
	int min_r = 0;
	int max_r = 100;
	min_r *= 100;
	max_r *= 100;

	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (max_r - min_r);
		a[i] /= 100;
	}
}
void RandomArr(double a[], const int n)
{
	int min_r = 0;
	int max_r = 100;
	min_r *= 100;
	max_r *= 100;

	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (max_r - min_r);
		a[i] /= 100;
	}
}
void RandomArr(char a[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		int x = rand() % (96 - 66);
		a[i] = (char)x;
	}
}

void ShowArr(int a[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl << endl;
}
void ShowArr(float a[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl << endl;
}
void ShowArr(double a[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl << endl;
}
void ShowArr(char a[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl << endl;
}

int Sum(int a[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return(sum);
}
int Sum(float a[], const int n)
{
	float sum = 0.0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return(sum);
}
int Sum(double a[], const int n)
{
	double sum = 0.0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return(sum);
}

double Avg(int a[], const int n)
{
	double avg = (double)Sum(a, n) / n;
	return(avg);
}
float Avg(float a[], const int n)
{
	float avg = (float)Sum(a, n) / n;
	return(avg);
}
double Avg(double a[], const int n)
{
	double avg = (double)Sum(a, n) / n;
	return(avg);
}

int MinValueIn(int a[], const int n)
{
	int min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < min) min = a[i];
	}
	return min;
}
float MinValueIn(float a[], const int n)
{
	float min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < min) min = a[i];
	}
	return min;
}
double MinValueIn(double a[], const int n)
{
	double min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] < min) min = a[i];
	}
	return min;
}


int MaxValueIn(int a[], const int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max) max = a[i];
	}
	return max;
}
float MaxValueIn(float a[], const int n)
{
	float max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max) max = a[i];
	}
	return max;
}
double MaxValueIn(double a[], const int n)
{
	double max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max) max = a[i];
	}
	return max;
}


void ShiftRight(int a[], const int n, int s)
{
	do
	{
		int temp = a[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			a[i] = a[i - 1];
		}
		a[0] = temp;
		s--;
	} while (s);
}
void ShiftRight(float a[], const int n, int s)
{
	do
	{
		float temp = a[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			a[i] = a[i - 1];
		}
		a[0] = temp;
		s--;
	} while (s);
}
void ShiftRight(double a[], const int n, int s)
{
	do
	{
		double temp = a[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			a[i] = a[i - 1];
		}
		a[0] = temp;
		s--;
	} while (s);
}
void ShiftRight(char a[], const int n, int s)
{
	do
	{
		char temp = a[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			a[i] = a[i - 1];
		}
		a[0] = temp;
		s--;
	} while (s);
}

void ShiftLeft(int a[], const int n, int s)
{
	ShiftRight(a, n, n - s);
}
void ShiftLeft(float a[], const int n, int s)
{
	ShiftRight(a, n, n - s);
}
void ShiftLeft(double a[], const int n, int s)
{
	ShiftRight(a, n, n - s);
}
void ShiftLeft(char a[], const int n, int s)
{
	ShiftRight(a, n, n - s);
}
