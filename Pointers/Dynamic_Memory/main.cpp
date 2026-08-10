#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int** Allocate(const int rows, const int cols);
void Clear(int**& arr, const int rows, const int cols = 0);
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int** arr, const int rows, const int cols, int minRand = 0, int maxRand = 100);
void Print(int arr[], const int n);
void Print(int** arr, const int rows, const int cols);

int* push_back(int arr[], int& n, const int value);
int* push_front(int arr[], int& n, const int value);

int* pop_back(int arr[], int& n);
int* pop_front(int arr[], int& n);

int* insert(int arr[], int& n, const int value, const int num);
int* erase(int arr[], int& n, const int num);

int** push_row_back(int** arr, int& rows, const int cols);
int** push_row_front(int** arr, int& rows, const int cols);
int** insert_row(int** arr, int& rows, const int cols, const int num);

int** pop_row_back(int** arr, int& rows, const int cols);
int** pop_row_front(int** arr, int& rows, const int cols);
int** erase_row(int** arr, int& rows, const int cols, const int num);

void push_col_back(int** arr, const int rows, int& cols);
void push_col_front(int** arr, const int rows, int& cols);
void insert_col(int** arr, const int rows, int& cols, const int num);

void pop_col_back(int** arr, const int rows, int& cols);
void pop_col_front(int** arr, const int rows, int& cols);
void erase_col(int** arr, const int rows, int& cols, const int num);


//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");

#ifdef DYNAMIC_MEMORY_1
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];  //объявление динамического массива


	FillRand(arr, n);
	Print(arr, n);

	int value;
	cout << "Введите добавляемое значение: "; cin >> value;
	arr = push_back(arr, n, value);
	Print(arr, n);

	cout << endl;
	cout << "Введите добавляемое значение: "; cin >> value;
	arr = push_front(arr, n, value);
	Print(arr, n);

	cout << endl;
	arr = pop_back(arr, n);
	Print(arr, n);

	cout << endl;
	arr = pop_front(arr, n);
	Print(arr, n);

	cout << endl;
	int num;
	cout << "Введите добавляемое значение: "; cin >> value;
	cout << "Введите номер элемента для вставки: "; cin >> num;
	arr = insert(arr, n, value, num);
	Print(arr, n);

	cout << endl;
	cout << "Введите номер элемента для удаления: "; cin >> num;
	arr = erase(arr, n, num);
	Print(arr, n);

	delete[] arr;
#endif // DYNAMIC_MEMORY_1

#ifdef DYNAMIC_MEMORY_2

	int rows;
	int cols;
	int num;
	cout << "Введите количество строк: "; cin >> rows;
	cout << "Введите количество элементов строки: "; cin >> cols;

	int** arr = Allocate(rows, cols);


	FillRand(arr, rows, cols, 0, 100);
	Print(arr, rows, cols);

	cout << endl;
	arr = push_row_back(arr, rows, cols);
	FillRand(arr[rows - 1], cols, 0, 100);
	Print(arr, rows, cols);


	cout << endl;
	arr = push_row_front(arr, rows, cols);
	FillRand(arr[0], cols, 100, 1000);
	Print(arr, rows, cols);

	cout << endl;
	cout << "Введите номер строки для вставки: "; cin >> num;
	arr = insert_row(arr, rows, cols, num);
	FillRand(arr[num], cols, 1000, 10000);
	Print(arr, rows, cols);

	cout << endl;
	arr = pop_row_back(arr, rows, cols);
	Print(arr, rows, cols);

	cout << endl;
	arr = pop_row_front(arr, rows, cols);
	Print(arr, rows, cols);

	cout << endl;
	cout << "Введите номер строки для удаления: "; cin >> num;
	arr = erase_row(arr, rows, cols, num);
	Print(arr, rows, cols);

	cout << endl;
	push_col_back(arr, rows, cols);
	for (int i = 0; i < rows; i++)arr[i][cols - 1] = rand() % 100;
	Print(arr, rows, cols);

	cout << endl;
	push_col_front(arr, rows, cols);
	for (int i = 0; i < rows; i++)arr[i][0] = rand() % (1000 - 100) + 100;
	Print(arr, rows, cols);

	cout << endl;
	cout << "Введите номер столбца для вставки: "; cin >> num;
	insert_col(arr, rows, cols, num);
	for (int i = 0; i < rows; i++)arr[i][num] = rand() % (10000 - 1000) + 1000;
	Print(arr, rows, cols);

	cout << endl;
	cout << endl;
	pop_col_back(arr, rows, cols);
	Print(arr, rows, cols);

	cout << endl;
	pop_col_front(arr, rows, cols);
	Print(arr, rows, cols);

	cout << endl;
	cout << "Введите номер столбца для удаления: "; cin >> num;
	erase_col(arr, rows, cols, num);
	Print(arr, rows, cols);


#endif // DYNAMIC_MEMORY_2

}

int** Allocate(const int rows, const int cols)
{
	///////////////////////////////////////////////////////////////////////
	////////		Объявление двумерного динамического массива		///////
	///////////////////////////////////////////////////////////////////////


	//1) Содаем массив указателей:
	int** arr = new int* [rows];

	//2) Выделяем память под строки:
	for (int i = 0; i < rows; i++) arr[i] = new int[cols];

	return arr;
}
void Clear(int**& arr, const int rows, const int cols)
{
	///////////////////////////////////////////////////////////////////////
	////////		Удаление двумерного динамического массива		///////
	///////////////////////////////////////////////////////////////////////

	//1) Сначала удаляются строки двумерного массива:
	for (int i = 0; i < rows; i++) delete[] arr[i];

	//2) Только теперь можно удалить массив указателей:
	delete[] arr;

	//3) Зануляем указатель на массив
	arr = nullptr;
}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % (maxRand - minRand) + minRand;  //Через арифметику указателей и оператор разыменовани
	}
}
void FillRand(int** arr, const int rows, const int cols, int minRand, int maxRand)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++) cout << arr[i] << "\t"; //Через оператор индексирования (Subscript operator)

	cout << endl;
}
void Print(int** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

int* push_back(int arr[], int& n, const int value)
{
	//1) Создаем буферный массив нужного размера:
	int* buffer = new int[n + 1];

	//2) Копируем все элементы из исходного массива в буферный:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}

	//3) Удаляем исходный массив:
	delete[] arr;

	//4) Подменяем адрес исходного массива адресом нового массива:
	arr = buffer;
	//buffer = nullptr;	//nullptr - это указатель на 0;

	//5) Только после всего вышенаписанного в массиве 'arr' появляется элемент,
	//	 в который можно сохранить добавляемое значени:
	arr[n] = value;

	//6) После добавления элемента в массив, количество его элементов увеличивается на 1:
	n++;

	//7) Mission complete - значение добавлено.
	return buffer;
}

int* push_front(int arr[], int& n, const int value)
{
	//1) 
	int* buffer = new int[n + 1];
	//2)
	for (int i = 0; i < n; i++) buffer[i + 1] = arr[i];
	//3)
	delete[] arr;

	//4)
	buffer[0] = value;

	//5)
	n++;

	return buffer;
}

int* pop_back(int arr[], int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}
int* pop_front(int arr[], int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++) buffer[i] = arr[i + 1];
	delete[] arr;
	return buffer;
}

int* insert(int arr[], int& n, const int value, const int num)
{
	if (num < 0 || num > n)
	{
		cout << "Error: Out of renge exception" << endl;
		return arr;
	}
	//1) 
	int* buffer = new int[n + 1];
	//2)
	for (int i = 0; i < n; i++)
	{
		/*if (i < num)
			buffer[i] = arr[i];
		else
			buffer[i + 1] = arr[i];*/

		// Или короче тернарником
		//i < num ? buffer[i] = arr[i] : buffer[i + 1] = arr[i];

		// Или еще короче
		buffer[i < num ? i : i + 1] = arr[i];
	}
	//3)
	delete[] arr;

	//4)
	buffer[num] = value;

	//5)
	n++;

	return buffer;
}
int* erase(int arr[], int& n, const int num)
{
	if (num < 0 || num > n)
	{
		cout << "Error: Out of renge exception" << endl;
		return arr;
	}
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++) buffer[i] = arr[i < num ? i : i + 1];
	return buffer;
}
int** push_row_back(int** arr, int& rows, const int cols)
{
	int** buffer = new int* [rows + 1];
	for (int i = 0; i < rows; i++) buffer[i] = arr[i];
	delete[] arr;
	buffer[rows] = new int[cols] {};
	rows++;
	return buffer;
}

int** push_row_front(int** arr, int& rows, const int cols)
{
	int** buffer = new int* [rows + 1];
	for (int i = 0; i < rows; i++) buffer[i + 1] = arr[i];
	delete[] arr;
	buffer[0] = new int[cols] {};
	rows++;
	return buffer;
}

int** insert_row(int** arr, int& rows, const int cols, const int num)
{
	if (num < 0 || num > rows)
	{
		cout << "Error: Out of renge exception" << endl;
		return arr;
	}
	int** buffer = new int* [rows + 1];
	for (int i = 0; i < rows; i++) buffer[i < num ? i : i + 1] = arr[i];
	delete[] arr;
	buffer[num] = new int[cols] {};
	rows++;
	return buffer;
}

int** pop_row_back(int** arr, int& rows, const int cols)
{
	int** buffer = new int* [rows--];
	for (int i = 0; i < rows; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}

int** pop_row_front(int** arr, int& rows, const int cols)
{
	int** buffer = new int* [rows--];
	for (int i = 0; i < rows; i++)buffer[i] = arr[i + 1];
	delete[] arr;
	return buffer;
}

int** erase_row(int** arr, int& rows, const int cols, const int num)
{
	if (num < 0 || num > rows)
	{
		cout << "Error: Out of renge exception" << endl;
		return arr;
	}
	int** buffer = new int* [rows--];
	for (int i = 0; i < rows; i++) buffer[i] = arr[i < num ? i : i + 1];
	delete[] arr;
	return buffer;
}
void push_col_back(int** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		int* buffer = new int[cols + 1] {};
		for (int j = 0; j < cols; j++) buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}
void push_col_front(int** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		int* buffer = new int[cols + 1] {};
		for (int j = 0; j < cols; j++) buffer[j + 1] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}

void insert_col(int** arr, const int rows, int& cols, const int num)
{
	if (num < 0 || num > cols)
	{
		cout << "Error: Out of renge exception" << endl;
		return;
	}
	for (int i = 0; i < rows; i++)
	{
		int* buffer = new int[cols + 1] {};
		for (int j = 0; j < cols; j++) buffer[j < num ? j : j + 1] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}

void pop_col_back(int** arr, const int rows, int& cols)
{
	cols--;
	for (int i = 0; i < rows; i++)
	{
		int* buffer = new int[cols];
		for (int j = 0; j < cols; j++) buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
}
void pop_col_front(int** arr, const int rows, int& cols)
{
	cols--;
	for (int i = 0; i < rows; i++)
	{
		int* buffer = new int[cols];
		for (int j = 0; j < cols; j++) buffer[j] = arr[i][j + 1];
		delete[] arr[i];
		arr[i] = buffer;
	}
}
void erase_col(int** arr, const int rows, int& cols, const int num)
{
	if (num < 0 || num > cols)
	{
		cout << "Error: Out of renge exception" << endl;
		return;
	}
	cols--;
	for (int i = 0; i < rows; i++)
	{
		int* buffer = new int[cols];
		for (int j = 0; j < cols; j++) buffer[j] = arr[i][j < num ? j : j + 1];
		delete[] arr[i];
		arr[i] = buffer;
	}
}
