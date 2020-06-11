```c
#include <iostream>

using namespace std;

/* 팝콘 - 8000원
   버터구이 오징어 - 5000원
   나쵸 - 3000원*/

int money = 0;


void popcorn();
void butter_octopus();
void nacho();

int main()
{
	int num;
	char answer;

	cout << "    < Help Cinema Market >   " << endl;
	cout << endl;

	cout << "1. 팝콘 : 8000원" << endl;
	cout << endl;

	cout << "2. 버터구이 오징어 : 5000원 " << endl;
	cout << endl;

	cout << "3. 나쵸 : 3000원 " << endl;
	cout << endl;

	do
	{
		cout << "음식 번호 입력 : ";
		cin >> num;
		cout << endl;

		if (num == 1)
			popcorn();
		else if (num == 2)
			butter_octopus();
		else if (num == 3)
			nacho();

		cout << endl;
		cout << "음식을 더 고르시겠습니까? (Y/N) : ";
		cin >> answer;
		cout << endl;

	} while(answer == 'Y' || answer == 'y');
}

void popcorn()
{
	int popcorn_n;

	cout << "수량을 입력하시오 : ";
	cin >> popcorn_n;

	cout << endl;

	money += 8000 * popcorn_n;
	cout << "금액은 " << money << "원 입니다" << endl;
}

void butter_octopus()
{
	int butter_octopus_n;

	cout << "수량을 입력하시오 : " ;
	cin >> butter_octopus_n;

	cout << endl;

	money += 5000 * butter_octopus_n;
	cout << "금액은 " << money << "원 입니다" << endl;
}

void nacho()
{
	int nacho_n;

	cout << "수량을 입력하시오 : " ;
	cin >> nacho_n;

	cout << endl;

	money += 3000 * nacho_n;
	cout << "금액은 " << money << "원 입니다" << endl;
}
