#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
void main()
{
	setlocale(LC_ALL, "Russian");

#if defined TASK_1
	double number;
	int ruble;
	//int kopeck;
	cout << "Введите дробное число: ";
	cin >> number;
	cout << endl;
	/*number += 0.0000000001;
	ruble = number;            
	kopeck = (number - ruble) * 100;
	cout << "В денежном формате будет: " << ruble;
	cout << " руб. " << (int)kopeck << " коп." << endl;*/
	ruble = (int)number;
	cout << "В денежном формате будет: " << ruble << " руб. "; // (int)number - явное преобразование в 'int'
	cout  << (number - ruble)*100 << " коп." << endl;

	
#endif

#if defined TASK_2
	double price_notebook;
	double price_pencil;
	int number_of_notebuk;
	int number_of_pencil;
	double purchase_price;

	cout << " Вычесление стоимости покупки." << endl;
	cout << " Введите исходные данные: " << endl;
	cout << " Цена тетради (руб.) -> ";
	cin >> price_notebook;
	cout << " Количество тетрадей -> ";
	cin >> number_of_notebuk;
	cout << " Цена карандаша (руб.) -> ";
	cin >> price_pencil;
	cout << " Количество карандашей -> ";
	cin >> number_of_pencil;
	purchase_price = price_notebook * number_of_notebuk + price_pencil * number_of_pencil;
	cout << " Стоимость покупки: " << purchase_price << " руб." << endl << endl;

#endif

#if defined TASK_3
	double price_notebook;
	double price_cover;
	int number_of_set;
	double purchase_price;

	cout << " Вычесление стоимости покупки." << endl;
	cout << " Введите исходные данные: " << endl;
	cout << " Цена тетради (руб.) -> ";
	cin >> price_notebook;
	cout << " Цена обложки (руб.) -> ";
	cin >> price_cover;
	cout << " Количество комплектов (шт.) -> ";
	cin >> number_of_set;
	purchase_price = (price_notebook + price_cover) * number_of_set;
	cout << " Стоимость покупки: " << purchase_price << " руб." << endl << endl;

#endif

#if defined TASK_4
	double distance_to_the_dacha;
	double price_gasoline;
	double price_of_the_trip;
	double gasoline_consumption;

	cout << " Вычисление стоимости покупки на дачу и обратно." << endl;
	cout << " Введите исходные данные: " << endl;
	cout << " Расстояние до дачи (км.) -> ";
	cin >> distance_to_the_dacha;
	cout << " Расход бензина (л./100 км.) -> ";
	cin >> gasoline_consumption;
	cout << " Цена литра за бензин (руб.) -> ";
	cin >> price_gasoline;
	price_of_the_trip = distance_to_the_dacha / 100 * gasoline_consumption * price_gasoline * 2;
	cout << " Поездка на дачу и обратно обойдется в " << price_of_the_trip << " руб." << endl << endl;

#endif
}