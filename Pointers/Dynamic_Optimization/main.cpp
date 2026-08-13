#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

template<typename T>T** Allocate(const int rows, const int cols);
template<typename T>void Clear(T**& arr, const int rows, const int cols = 0);
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int** arr, const int rows, const int cols, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double** arr, const int rows, const int cols, int minRand = 0, int maxRand = 100);
template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T** arr, const int rows, const int cols);

template<typename T>T* push_back(T arr[], int& n, const T value);
template<typename T>T* push_front(T arr[], int& n, const T value);

template<typename T>T* pop_back(T arr[], int& n);
template<typename T>T* pop_front(T arr[], int& n);

template<typename T>T* insert(T arr[], int& n, const T value, const int num);
template<typename T>T* erase(T arr[], int& n, const int num);

template<typename T>T** push_row_back(T** arr, int& rows, const int cols);
template<typename T>T** push_row_front(T** arr, int& rows, const int cols);
template<typename T>T** insert_row(T** arr, int& rows, const int cols, const int num);

template<typename T>T** pop_row_back(T** arr, int& rows);
template<typename T>T** pop_row_front(T** arr, int& rows);
template<typename T>T** erase_row(T** arr, int& rows, const int num);

template<typename T>void push_col_back(T** arr, const int rows, int& cols);
template<typename T>void push_col_front(T** arr, const int rows, int& cols);
template<typename T>void insert_col(T** arr, const int rows, int& cols, const int num);

template<typename T>void pop_col_back(T** arr, const int rows, int& cols);
template<typename T>void pop_col_front(T** arr, const int rows, int& cols);
template<typename T>void erase_col(T** arr, const int rows, int& cols, const int num);


//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");

#ifdef DYNAMIC_MEMORY_1
	int n;
	cout << "Введите размер массива: "; cin >> n;
	double* arr = new double[n];  //объявление динамического массива


	FillRand(arr, n);
	Print(arr, n);

	double value;
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

	double** arr = Allocate<double>(rows, cols);


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
	arr = pop_row_back(arr, rows);
	Print(arr, rows, cols);

	cout << endl;
	arr = pop_row_front(arr, rows);
	Print(arr, rows, cols);

	cout << endl;
	cout << "Введите номер строки для удаления: "; cin >> num;
	arr = erase_row(arr, rows, num);
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

template<typename T>T** Allocate(const int rows, const int cols)
{
	T** arr = new T * [rows];
	for (int i = 0; i < rows; i++) arr[i] = new T[cols];
	return arr;
}
template<typename T>void Clear(T**& arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++) delete[] arr[i];
	delete[] arr;
	arr = nullptr;
}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % (maxRand - minRand) + minRand;  //Через арифметику указателей и оператор разыменовани
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = double(rand() % (maxRand - minRand) + minRand) / 100;  //Через арифметику указателей и оператор разыменовани
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
void FillRand(double** arr, const int rows, const int cols, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = double(rand() % (maxRand - minRand) + minRand) / 100;
		}
	}
}
template<typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++) cout << arr[i] << "\t"; //Через оператор индексирования (Subscript operator)

	cout << endl;
}
template<typename T>void Print(T** arr, const int rows, const int cols)
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
template<typename T>T* push_back(T arr[], int& n, const T value)
{
	T* buffer = new T[n + 1];

	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	arr = buffer;
	arr[n] = value;
	n++;
	return buffer;
}
template<typename T>T* push_front(T arr[], int& n, const T value)
{ 
	T* buffer = new T[n + 1];
	for (int i = 0; i < n; i++) buffer[i + 1] = arr[i];
	delete[] arr;
	buffer[0] = value;
	n++;
	return buffer;
}
template<typename T>T* pop_back(T arr[], int& n)
{
	T* buffer = new T[--n];
	for (int i = 0; i < n; i++) buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}
template<typename T>T* pop_front(T arr[], int& n)
{
	T* buffer = new T[--n];
	for (int i = 0; i < n; i++) buffer[i] = arr[i + 1];
	delete[] arr;
	return buffer;
}
template<typename T>T* insert(T arr[], int& n, const T value, const int num)
{
	if (num < 0 || num > n)
	{
		cout << "Error: Out of renge exception" << endl;
		return arr;
	}
	T* buffer = new T[n + 1];
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
	delete[] arr;
	buffer[num] = value;
	n++;
	return buffer;
}
template<typename T>T* erase(T arr[], int& n, const int num)
{
	if (num < 0 || num > n)
	{
		cout << "Error: Out of renge exception" << endl;
		return arr;
	}
	T* buffer = new T[--n];
	for (int i = 0; i < n; i++) buffer[i] = arr[i < num ? i : i + 1];
	return buffer;
}
template<typename T>T** push_row_back(T** arr, int& rows, const int cols)
{
	return push_back(arr, rows, new T[cols]);
}
template<typename T>T** push_row_front(T** arr, int& rows, const int cols)
{
	return push_front(arr, rows, new T[cols]);
}
template<typename T>T** insert_row(T** arr, int& rows, const int cols, const int num)
{
	return insert(arr, rows, new T[cols], num);
}
template<typename T>T** pop_row_back(T** arr, int& rows)
{
	delete[] arr[rows-1];
	return pop_back(arr, rows);
}
template<typename T>T** pop_row_front(T** arr, int& rows)
{
	delete[] arr[0];
	return  pop_front(arr, rows);
}
template<typename T>T** erase_row(T** arr, int& rows, const int num)
{
	delete[] arr[num];
	return erase(arr, rows, num);
}
template<typename T>void push_col_back(T** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols + 1]{};
		for (int j = 0; j < cols; j++) buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}
template<typename T>void push_col_front(T** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols + 1]{};
		for (int j = 0; j < cols; j++) buffer[j + 1] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}

template<typename T>void insert_col(T** arr, const int rows, int& cols, const int num)
{
	if (num < 0 || num > cols)
	{
		cout << "Error: Out of renge exception" << endl;
		return;
	}
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols + 1]{};
		for (int j = 0; j < cols; j++) buffer[j < num ? j : j + 1] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}

template<typename T>void pop_col_back(T** arr, const int rows, int& cols)
{
	cols--;
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols];
		for (int j = 0; j < cols; j++) buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
}
template<typename T>void pop_col_front(T** arr, const int rows, int& cols)
{
	cols--;
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols];
		for (int j = 0; j < cols; j++) buffer[j] = arr[i][j + 1];
		delete[] arr[i];
		arr[i] = buffer;
	}
}
template<typename T>void erase_col(T** arr, const int rows, int& cols, const int num)
{
	if (num < 0 || num > cols)
	{
		cout << "Error: Out of renge exception" << endl;
		return;
	}
	cols--;
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols];
		for (int j = 0; j < cols; j++) buffer[j] = arr[i][j < num ? j : j + 1];
		delete[] arr[i];
		arr[i] = buffer;
	}
}
