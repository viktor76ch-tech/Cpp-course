#include"Header.h"
#include"Constants.h"
#include"FillRand.h"
#include"FillRand.cpp"
#include"Show.h"
#include"Show.cpp"
#include"Sort.h"
#include"Sort.cpp"
#include"Sum.h"
#include"Sum.cpp"
#include"Avg.h"
#include"Avg.cpp"
#include"MinNum.h"
#include"MinNum.cpp"
#include"MaxNum.h"
#include"MaxNum.cpp"
#include"Shift.h"
#include"Shift.cpp"







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




