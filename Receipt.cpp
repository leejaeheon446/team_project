```c

#include <iostream>
#include <string>
using namespace std;

int selectStaff();
int selectDate();
int selectMovie();
int printReceipt(int a);
string name, date;

int main()
{
	int movie;

	selectStaff();
	date = selectDate();
	movie = selectMovie();
	printReceipt(movie);

	return 0;
}

int printReceipt(int a)
{
	if (a == 1) 
	{
		cout << "극한직업" << endl;
	}
	else {
		cout << "가장 보통의 연애" << endl;
	}

	return 0;
}

int selectStaff() {
	cout << "---Help Cineman---" << endl;
	cout << endl;
	cout << "스태프 이름을 입력하시오 : " << endl;
	cin >> name;

	return 0;
}

int selectDate() {
	cout << endl;
	cout << "날짜를 입력하시오 :";
	cin >> date;

	return 0;
}

int selectMovie() 
{
	int movie;

	cout << "오늘 볼 영화 :" << endl;

	cout << "[1] 극한직업" << endl << "[2] 가장 보통의 연애" << endl;
	cin >> movie;
	cout << endl;

	cout << "오늘 볼 영화 :" << endl;



	return 0;
}
