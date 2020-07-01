#include<iostream>
#include<Windows.h>
#include<string>
#include<stdlib.h>

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
	void set_seat(string seat)
	{
		this->seat = seat;
	}
	string get_title() {
		return title;
	}
	string get_time() {
		return time;
	}
	string get_seat() {
		return seat;
	}
private:
	string title;
	string time;
	string seat;
};

void first_screen(); // 실행 시 첫 화면
void show_menu(); // 메뉴
void check_movie(); // 영화 조회
void check_r(); // 예매 확인 , 가격표 출력
void time(); // 영화 시간
void seat(); // 좌석선택
