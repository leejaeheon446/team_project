```cpp
#include <iostream>

using namespace std;


int money = 0;

void select_genre();
void comedy_list();
void romance_list();
void fantasy_list();
void thriller_list();

void select_genre()
{
	int num;

	cout << "    < 영화 장르 선택 >    " << endl;
	cout << endl;

	cout << "1. 코미디		2.로맨스		3.판타지		4.스릴러" << endl;
	cout << endl;

	cout << "입력 : ";
	cin >> num;
	cout << endl;

	if (num == 1)
		comedy_list();
	else if (num == 2)
		romance_list();
	else if (num == 3)
		fantasy_list();
	else if (num == 4)
		thriller_list();
	else
	{
		cout << "다시 입력" << endl;
		select_genre();
	}

}

void comedy_list()
{
	int num;
	cout << "1. 코미디" << endl;
	cout << endl;
	cout << "1. 극한 직업		2. 가장 보통의 연애		3. 엑시트" << endl;

	cout << endl;

	cout << "입력 : ";
	cin >> num;
	cout << endl;
	if (num)
		money += 10000;
}

void romance_list()
{
	int num;
	cout << "1. 로맨스" << endl;
	cout << endl;

	cout<< "1. 유열의 음악앨범		2. 라스트 크리스마스		3. 라이브 피트" << endl;
	cout << endl;

	cout << "입력 : ";
	cin >> num;
	cout << endl;
	if (num)
		money += 10000;
}

void fantasy_list()
{
	int num;
	cout << "1. 판타지" << endl;
	cout << endl;
    cout << "1. 겨울 왕국2		2. 캣츠		3. 알라딘" << endl;
	cout << endl;
	cout << "입력 : ";
	cin >> num;
	cout << endl;
	if (num)
		money += 10000;
}

void thriller_list()
{
	int num;
	cout << "1. 스릴러" << endl;
	cout<< "1. 변신		2. 어스		3. 사바하" << endl;
	cout << endl;
	cout << "입력 : ";
	cout << endl;
	cin >> num;
	if (num)
		money += 10000;
}

/* 팝콘 - 8000원
   버터구이 오징어 - 5000원
   나쵸 - 3000원*/

void popcorn();
void butter_octopus();
void nacho();

int main()
{
	select_genre();

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

	} while (answer == 'Y' || answer == 'y');
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

	cout << "수량을 입력하시오 : ";
	cin >> butter_octopus_n;

	cout << endl;

	money += 5000 * butter_octopus_n;
	cout << "금액은 " << money << "원 입니다" << endl;
}

void nacho()
{
	int nacho_n;

	cout << "수량을 입력하시오 : ";
	cin >> nacho_n;

	cout << endl;

	money += 3000 * nacho_n;
	cout << "금액은 " << money << "원 입니다" << endl;
}
