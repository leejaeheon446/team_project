```cpp
//실행시 
#include "f.h"

void first_screen()
{
	cout << endl << endl << endl;
	cout << "                ■      ■   ■■■■    ■         ■■■■■      ■■■■    ■■■■    ■          ■ \n";
	cout << "                ■      ■   ■          ■         ■      ■     ■          ■     ■     ■        ■ \n";
	cout << "                ■      ■   ■          ■         ■■■■■     ■          ■             ■      ■     \n";
	cout << "                ■■■■■   ■■■■    ■         ■             ■          ■              ■    ■      \n";
	cout << "                ■      ■   ■          ■         ■             ■          ■    ■■■     ■  ■  \n";
	cout << "                ■      ■   ■          ■         ■             ■      ■  ■      ■■      ■■\n";
	cout << "                ■      ■   ■■■■    ■■■■   ■              ■■■■    ■■■■ ■       ■\n";
	cout << "                                                                   \n";
	cout << endl << endl << endl;

	cout << "\t\t\t\t\t\t\t\t\t\t      IT정보공학과 201918770 김제현" << endl << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t      IT정보공학과 201711456 이재헌" << endl << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t      IT정보공학과 201824423 발진냠" << endl << endl;
	cout << endl << endl;

	cout << "					<계속하려면 Enter를 눌러주세요.>" << endl << endl;


	char ch;
	cin.get(ch);
	if (ch == '\n')
		system("cls");
	else
		exit(1);
}
