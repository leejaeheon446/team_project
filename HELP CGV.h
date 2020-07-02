```cpp

#include<iostream>
#include<Windows.h> // system(cls)
#include<string>
#include<stdlib.h> // exit()

using namespace std;

class my_reservation {
public:
	void set_movie(string title)
	{
		this->title = title;
	}
	void set_time(string time)
	{
		this->time = time;
	}

	string get_title() {
		return title;
	}
	string get_time() {
		return time;
	}

private:
	string title;
	string time;
};

void first_screen(); // 실행 시 첫 화면
void show_menu(); // 메뉴 선택창
void check_movie(); // 영화 조회
void snack_menu();
void check_r(); // 예약 확인
void time(); // 영화 시간 선택 
void seat(); // 좌석 선택
void cancel_r(); // 예약 취소
void print_snack(); //주문한 간식거리 출력
