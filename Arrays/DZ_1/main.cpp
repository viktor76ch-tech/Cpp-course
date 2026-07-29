/*
1. В проекте 'Arrays':
- элементы массива должен вводить ползователь с клавиатуры;
- вывести массив на экран в прямом порядке (от нулевого элемента до последнего);
- вывести элементы массива на экран в обратном порядке (от последнего элемента до нулевого);
- вычислить сумму и среднее-арифметическое элементов массива;
- найти в массиве минимальное и максимальное значение;
Все эти действия нужно выполнить над первоначально введенным массивом
(для каждой задачи НЕ нужно создавать новый массив);
2. В Solution 'Arrays' добавить проект 'Shift', и в нем массив из десяти элементов,
проинициализированный значениями 0, 1, 2 ...., 9 циклически сдвинуть на заданное число элементов влево
0, 1, 2, 3, 4, 5, 6, 7, 8, 9
1, 2, 3, 4, 5, 6, 7, 8, 9, 0
2, 3, 4, 5, 6, 7, 8, 9, 0, 1
3, 4, 5, 6, 7, 8, 9, 0, 1, 2

3. Выполнить циклический сдвиг массива на заданное число элементов вправо;
*/

#include<Windows.h>
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define TASK_1
//#define TASK_2
#define TASK_3

void main()
{
	setlocale(LC_ALL, "");

#ifdef TASK_1

	const int n = 5;
	int arr[n];
	int sum = 0;
	double mean;
	int min;
	int max;
	cout << "Введите пять чисел массива через пробел: "; 

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << arr[n - 1 - i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	mean = (double)sum / n;
	cout << "Сумма всех членов массива равна: " << sum <<endl;
	cout << "Среднее арифметическое всех членов массива равно: " << mean <<endl;
	cout << endl;

	min = arr[0];
	max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}

	cout << "Минимальное число в массиве: " << min << endl;
	cout << "Максимальное число в массиве: " << max << endl;

#endif // TASK_1

#ifdef TASK_2

	const int n = 10;
	int arr[n] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int num;
	int temp;
	
	cout << "Введите число элементов для сдвига: "; cin >> num;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	Sleep(1000);
	for (int i = 0; i < num; i++)
	{
		temp = arr[0];
		for (int i = 0; i < n - 1 ; i++)
		{
			arr[i] = arr[i + 1];
			cout << arr[i] << " ";
		}
		arr[9] = temp;
		cout << arr[9] << endl;
		Sleep(1000);
	}


#endif // TASK_2

#ifdef TASK_3

	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int num;
	int temp;

	cout << "Введите число элементов для сдвига: "; cin >> num;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	Sleep(1000);
	for (int i = 0; i < num; i++)
	{
		temp = arr[9];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = temp;
		//cout << arr[0] << endl;

		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		Sleep(1000);
	}


#endif // TASK_3
}