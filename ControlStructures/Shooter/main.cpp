#include<iostream>
#include<conio.h>
using namespace std;

//#define SHOOTER_SWITCH
//#define SHOOTER_IF_ELSE
#define ENTER		13
#define ESCAPE		27
#define SPASE		32
#define UP_ARROW	72
#define DOWN_ARROW	80
#define LEFT_ARROW	75
#define RIGHT_ARROW	77


void main()
{
	setlocale(LC_ALL, "");
#ifdef SHOOTER_SWITCH
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case UpArrow:
		case 'W':
		case 'w':	cout << "Вперед" << endl;	break;
		case DownArrow:
		case 'S':
		case 's':	cout << "Назад" << endl;	break;
		case LeftArrow:
		case 'A':
		case 'a':	cout << "Влево" << endl;	break;
		case RightArrow:
		case 'D':
		case 'd':	cout << "Вправо" << endl;	break;

		case ' ':	cout << "Прыжок" << endl;	break;
		case  Enter:cout << "Огонь" << endl;	break;
		case Escape:
		case -32:
		case 0:break;
		default:	cout << "Error" << endl;
		}
	} while (key != Escape);
#endif // SHOOTER_SWITCH

#ifdef SHOOTER_IF_ELSE
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W') cout << " Впред" << endl;
		else if (key == 's' || key == 'S') cout << " Назад" << endl;
		else if (key == 'a' || key == 'A') cout << " Влево" << endl;
		else if (key == 'd' || key == 'D') cout << " Вправо" << endl;
		else if (key == ENTER) cout << " Огонь" << endl;
		else if (key == SPASE) cout << " Прыжок" << endl;
		else if (key == ESCAPE) cout << "" << endl;
		else if (key == -32) continue;
		else if (key == 0) continue;
		else cout << " Error" << endl;
	} while (key != ESCAPE);

#endif // SHOOTER_IF_ELSE

	

}

		//while (_kbhit())
		//{
		//	_getch(); // Просто выбрасываем все лишние символы
		//}
/* 
Что делает while (_kbhit()) _getch();:
_kbhit() проверяет, есть ли еще символы в буфере клавиатуры

Если есть - _getch() считывает и выбрасывает их

Цикл повторяется, пока буфер не станет пустым

Теперь после нажатия w:

Считывается w (код 119) → выводится "Вперед"

Очищается буфер от лишнего кода 0

Цикл ждет следующего нажатия

"Error" больше не появляется
*/