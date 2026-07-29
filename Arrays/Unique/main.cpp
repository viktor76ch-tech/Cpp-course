//В Solution 'Arrays' добавить проект 'Unique', и в этом проекте
//массив из десяти элементов заполнить уникальными случайными числами
//в диапазоне от 70 до 80.

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define TASK_1


void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n];
	int num;

	for (int i = 0; i < n; i++)
	{
		arr[i] = 70 + rand() % (70 - 80);
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j]) 
			{ 
				i--;
				break; 
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}