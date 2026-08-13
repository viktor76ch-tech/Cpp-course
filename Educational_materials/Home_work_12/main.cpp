/*
Дан массив целых чисел.Воспользовавшись указателями,
поменяйте местами элементы массива с четными
и нечетными индексами(т.е.те элементы массива, которые
стоят на четных местах, поменяйте с элементами,
которые стоят на нечетных местах).
*/

#include<iostream>
using namespace std;

 //#define TASK_1       //Вариант1
 #define TASK_2       //Вариант2

void Chenge(int* ptr, int size);
void Print(int* ptr, int size);

#ifdef TASK_1


int main()
{
	setlocale(LC_ALL, "");


	int size = 8;
	int arr[] = { 0,1,2,3,4,5,6,7 };
	int* ptr = arr;

	cout << "Массив до замены: " << endl;
	Print(ptr, size);
	Chenge(ptr, size);
	cout << "Массив после замены: " << endl;
	Print(ptr, size);

	return 0;
}

void Chenge(int* ptr, int size)
{
	int temp = 0;
	for (int i = 0; i < size - 1; i += 2) {

		// Меняем местами ptr[i] и ptr[i+1]
		int temp = *(ptr + i);
		*(ptr + i) = *(ptr + i + 1);
		*(ptr + i + 1) = temp;
	};
}
void Print(int* ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(ptr + i) << " ";
	}
	cout << endl << endl;
}

#endif // TASK_1


#ifdef TASK_2

void Print(int* ptr, int size);
void Chenge(int* arr, int size);
int main()
{
	setlocale(LC_ALL, "");


	int size = 8;
	int* arr = new int[size] { 0, 1, 2, 3, 4, 5, 6, 7};
	cout << "Массив до замены: ";
	Print(arr, size);
	Chenge(arr, size);

	cout << "Массив после замены: ";
	Print(arr, size);

	return 0;
}  

void Chenge(int* arr, int size)
{
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0) {
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	};
}

void Print(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

#endif // TASK_2
