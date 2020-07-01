```cpp
// first_screen.cpp
// 실행 시 첫 화면
#include "f.h"

void first_screen()
{	
	cout << endl << endl;
	cout << "┏━━━━━━ Help Cinema━━━━━━┓" << endl;
	cout << "┃                                    ┃" << endl;
	cout << "┃ 1. 팝콘     :  8000원              ┃" << endl;
	cout << "┃ 2. 오징어   :  5000원              ┃" << endl;
	cout << "┃ 3. 나쵸     :  3000원              ┃" << endl;
	cout << "┃ 4. 종료                            ┃" << endl;
	cout << "┃                                    ┃" << endl;
	cout << "┗━━━━━━━━━━━━━━━━━━┛" << endl;
	cout << "					<원하는 항목을 선택하시오.>" << endl << endl;
	
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

