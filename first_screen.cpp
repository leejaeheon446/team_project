// first_screen.cpp
// 실행 시 첫 화면

#include"f.h"

void first_screen()
{	
	cout << endl << endl << endl;
	cout << "                                 ■■■■    ■■■■     ■        ■ \n";
	cout << "                                ■      ■  ■      ■    ■        ■ \n";
	cout << "                                ■          ■             ■      ■  \n";
	cout << "        ■■■■■  ■  ■      ■          ■              ■    ■   \n";
	cout << "        ■  ■  ■  ■  ■      ■          ■    ■■■     ■  ■    \n";
	cout << "        ■  ■  ■  ■■■      ■      ■  ■      ■■      ■■     \n";
	cout << "        ■  ■  ■      ■       ■■■■    ■■■■ ■       ■      \n";
	cout << "                     ■■                                              \n";
	cout << endl << endl << endl;
	cout << "					<계속하려면 Enter를 눌러주세요.>" << endl << endl;
	
	
	char ch;
	cin.get(ch);
	if (ch == '\n')
		system("cls");
	else
		exit(1);
}
