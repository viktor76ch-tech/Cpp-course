#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	cout << "Hello Arrays" << endl;

	const int n = 5;
	int arr[n];
	arr[1] = 1024;			//обращаемся к элементу массива на запись
	cout << arr[1] << endl;	//образаемся к элементу массива на чтение


	int minRand, maxRand;

	do
	{
		cout << "Введите минимальное случайное число: "; cin >> minRand;
		cout << "Введите максимальное случайное число: "; cin >> maxRand;
		if (minRand > maxRand)cout << "Минимальное должно быть меньше максимального" << endl;
		if (minRand == maxRand)cout << "Числа должны быть разные" << endl;
	} while (minRand >= maxRand);
	/*if (maxRand < minRand)
	{
	int buffer = minRand;
	minRand = maxRand;
	maxRand = buffer;
	}*/
	//Заполнение массива случайными числами:
	//Функция rand() ворзвращает ПСЕВДОСЛУЧАЙНОЕ число в диапазоне от 0 до 32 767 (RAND_MAX)
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		//arr[i] = 50 + rand() % (100 - 50);
	}

	//Вывод элементов массива в прямом порядке:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Вывод элементов массива в обратном порядке:
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Вычисление суммы исреднего-арифметического:
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;
	cout << "Среднее-арифметическое элементов массива: "
		<< (double)sum / n << endl;

	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве:" << max << endl;

	for (int i = 0; i < n; i++)	//Счетчик 'i' выбирает элемент, в который нужно поместить минимальное значение
	{
		for (int j = i + 1; j < n; j++) //Счетчик 'j' перебирает элементы в поисках минимального значения
		{
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
