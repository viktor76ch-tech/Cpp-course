#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define CHESS_1
//#define CHESS_2
#define CHESS_3
//#define ASCII

#define UP_L_CORNER  (char)218
#define DW_L_CORNER  (char)192
#define UP_R_CORNER  (char)191
#define DW_R_CORNER  (char)217
#define VER_LINE  (char)179
#define HOR_LINE  (char)196
#define WHITE_BOX  "\xDB\xDB"      //(char)219
#define BLACK_BOX  "\x20\x20"


void main()
{
	setlocale(LC_ALL, "");

#ifdef ASCII

	for (int i = 176; i < 224; i++)
	{
		cout << (char)i << "\t" << i << endl;
	}

	cout << UP_L_CORNER << " " << DW_L_CORNER << " " << UP_R_CORNER << " " << DW_R_CORNER << endl;
#endif // ASCII

#ifdef CHESS_1
	int n;
	cout << "¬ведите число: "; cin >> n;
	n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0) cout << UP_L_CORNER;
			else if (i == 0 && j == n) cout << UP_R_CORNER;
			else if (i == n && j == 0) cout << DW_L_CORNER;
			else if (i == n && j == n) cout << DW_R_CORNER;
			else if (i == 0 || i == n) cout << HOR_LINE << HOR_LINE;
			else if (j == 0 || j == n) cout << VER_LINE;
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
			/*else if  (i % 2 == j % 2) cout << WHITE_BOX << WHITE_BOX;
			else cout << "  ";*//*else if  (i % 2 == j % 2) cout << WHITE_BOX << WHITE_BOX;
			else cout << BLACK_BOX << BLACK_BOX;*/
		}
		cout << endl;
	}
#endif // CHESS_1

#ifdef CHESS_2
	int n;
	cout << "¬ведите число: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < n; k++)  //в низ
		{
			for (int m = 0; m < n; m++) // в право
			{
				if (m % 2 == i % 2)
				{
					for (int j = 0; j < n; j++)
					{
						cout << "* ";
					}
				}
				else
				{
					for (int j = 0; j < n; j++)
					{
						cout << "  ";
					}
				}
			}
			cout << endl;
		}
	}

#endif // CHESS_2

#ifdef CHESS_3
	int n;
	cout << "¬ведите число: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < n; k++)  //в низ
		{
			for (int m = 0; m < n; m++) // в право
			{
				for (int j = 0; j < n; j++)
				{
					cout << (~m & 1 ^ i & 1 ? "* " : "  ");
				}
			}
			cout << endl;
		}
	}

#endif // CHESS_3

}