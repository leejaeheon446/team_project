```cpp

#include<iostream>
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
	cout << "영화 장르 선택" << endl
		<< "1. 코미디		2.로맨스		3.판타지		4.스릴러" << endl;
	cout << "입력 : ";
	cin >> num;
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
	cout << "1. 코미디" << endl
		<< "1. 극한 직업		2. 가장 보통의 연애		3. 엑시트" << endl;
	cout << "입력 : ";
	cin >> num;
	if (num)
		money += 10000;
}

void romance_list()
{
	int num;
	cout << "1. 로맨스" << endl
		<< "1. 유열의 음악앨범		2. 라스트 크리스마스		3. 라이브 피트" << endl;
	cout << "입력 : ";
	cin >> num;
	if (num)
		money += 10000;
}

void fantasy_list()
{
	int num;
	cout << "1. 판타지" << endl
		<< "1. 겨울 왕국2		2. 캣츠		3. 알라딘" << endl;
	cout << "입력 : ";
	cin >> num;
	if (num)
		money += 10000;
}

void thriller_list()
{
	int num;
	cout << "1. 스릴러" << endl
		<< "1. 변신		2. 어스		3. 사바하" << endl;
	cout << "입력 : ";
	cin >> num;
	if (num)
		money += 10000;
}

int main(void)
{
	select_genre();
	return 0;
}
