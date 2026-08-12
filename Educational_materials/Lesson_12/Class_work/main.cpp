#include <iostream>
using namespace std;

//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_5
//#define TASK_6
//#define TASK_7
#define TASK_8

#ifdef TASK_1
int main()
{
	int x = 10;
	int y = 5;

	int* px;
	int* py;


	//Записываем адрес переменной x в px
	px = &x;

	// Отображаем адрес x через указатель 
	// и операцию взятия адреса
	cout << px << " " << &x << endl;

	// Отображаем значение x через переменную
	// и операцию разыменования
	// на экране 10 10 
	cout << *px << " " << x << endl;

	// Изменяем значение переменной x
	// используем операцию разыменования
	*px = 99;

	/* Отображаем новое значение x через переменную
	и операцию разыменования
	на экране отобразится 99 99
	*/
	cout << *px << " " << x << endl << endl;

	//Записываем адрес переменной y в py
	py = &y;

	// Отображаем адрес y через указатель 
	// и операцию взятия адреса
	cout << py << " " << &y << endl;

	// Отображаем значение y через переменную
	// и операцию разыменования
	// на экране 5 5
	cout << *py << " " << y << endl;

	// записываем значение адреса из px в py
	// теперь оба указатели указывают на x
	py = px;

	// Отображаем значение x через переменную
	// и два указателя
	// на экране 99 99 99 5
	cout << *px << " " << *py << " " << x << " " << y << endl << endl;

	return 0;
}

#endif // TASK_1

#ifdef TASK_2
#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int arr[size] = { 33, 44, 7, 8, 9 };

	// записываем адрес нулевого элемента массива в указатель
	int* ptr = &arr[0];

	/*
	Показываем значение нулевого элемента массива
	через разыменование указателя.
	На экране 33
	*/
	cout << *ptr << endl;

	/*
	Показываем значение первого элемента массива
	через разыменование указателя.
	Мы прибавляем смещение по адресу на один элемент
	после чего делаем разыменование.
	Адрес внутри указателя не меняется.
	На экране 44
	*/

	cout << *(ptr + 1) << endl;

	/*
	Выполняем смещение на один элемент целого типа вперед
	и записываем новый адрес в указатель ptr.
	Фактически это операция выглядит так
	ptr = ptr + 1 * sizeof(int)
	Теперь в указатель содержится адрес первого элемента
	*/
	ptr = ptr + 1;

	/*
	Показываем значение первого элемента массива
	через разыменование указателя.
	На экране 44
	*/
	cout << *ptr << endl;

	return 0;
}


#endif // TASK_2

#ifdef TASK_3

#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int arr[size] = { 33, 44, 7, 8, 9 };

	// записываем адрес нулевого элемента массива в указатель
	int* ptr = arr;

	/* отображаем весь массив через указатель
	на экране
	33 44 7 8 9
	*/
	for (int i = 0; i < size; i++) {
		cout << *(ptr + i) << " ";
	}

	// изменяем значение первого элемента
	*(ptr + 1) = 55;

	// изменяем значение второго элемента
	*(ptr + 2) = 12;

	cout << endl << endl;
	/* отображаем весь массив через указатель
	на экране
	33 55 12 8 9
	*/
	for (int i = 0; i < size; i++) {
		cout << *(ptr + i) << " ";
	}

	return 0;
}



#endif // TASK_3

#ifdef TASK_4

#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int arr[size] = { 33, 44, 7, 8, 9 };


	/* отображаем весь массив через указатель
	на экране
	33 44 7 8 9
	*/
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << " ";
	}

	// изменяем значение первого элемента
	*(arr + 1) = 55;

	// изменяем значение второго элемента
	*(arr + 2) = 12;

	cout << endl << endl;
	/* отображаем весь массив через указатель
	на экране
	33 55 12 8 9
	*/
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << " ";
	}

	return 0;
}

#endif // TASK_4

#ifdef TASK_5

#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int arr[size] = { 33, 44, 7, 8, 9 };

	int* ptr = arr;

	/* отображаем весь массив через указатель
	на экране
	33 44 7 8 9
	*/
	for (int i = 0; i < size; i++) {
		cout << ptr[i] << " ";
	}

	// изменяем значение первого элемента
	ptr[1] = 55;

	// изменяем значение второго элемента
	ptr[2] = 12;

	cout << endl << endl;
	/* отображаем весь массив через указатель
	на экране
	33 55 12 8 9
	*/
	for (int i = 0; i < size; i++) {
		cout << ptr[i] << " ";
	}

	return 0;
}

#endif // TASK_5

#ifdef TASK_6

#include <iostream>
using namespace std;

void ShowArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << " ";
	}
}
// подсчёт суммы элементов массива
int GetAmount(int* ptr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(ptr + i);
	}
	return sum;
}
int main()
{
	const int size = 5;
	int arr[size] = { 33, 44, 7, 8, 9 };


	/* отображаем весь массив
	на экране
	33 44 7 8 9
	*/
	ShowArray(arr, size);

	cout << endl << endl;

	// показываем сумму элементов массива
	// 101
	cout << "Amount of array elements: " << GetAmount(arr, size) << endl << endl;

	/* отображаем весь массив
	на экране
	33 44 7 8 9
	*/

	ShowArray(&arr[0], size);

	return 0;
}

#endif // TASK_6

#ifdef TASK_7
#include <iostream>
using namespace std;

/*
Передача переменных через указатель
Внутрь меняем значения переменных на которые указывают указатели
*/
void Swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}
int main()
{
	int av = 5, bv = 9;
	Swap(&av, &bv);

	// 9 5
	cout << av << " " << bv << endl;

	return 0;
}


#endif // TASK_7

#ifdef TASK_8
// Lesson12Task8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	/*
	Указатель неинициализирован
	В нём случайное значение
	*/
	int* ptr;

	// сейчас ptr нулевой указатель
	// так делать не рекомендуется
	ptr = 0;

	cout << ptr << endl;

	// Наследие языка С
	// так делать не рекомендуется
	ptr = NULL;

	cout << ptr << endl;

	// современный способ
	// создания нулевого указателя
	ptr = nullptr;

	cout << ptr << endl;

	if (ptr == nullptr) {
		cout << "\n\nNull pointer was found!" << endl;
	}
	return 0;
}


#endif // TASK_8
