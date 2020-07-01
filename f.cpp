```cpp
#include "f.h"

int total_money = 0; // 총 금액
int people_number = 0;

namespace test {
    my_reservation a;
    my_reservation* p = &a;
}

void show_menu()
{
	int num;
	cout << endl << endl << endl;
	cout << "\t\t\t1.		영화 조회\n";
	cout << "\t\t\t2.		예매 확인\n";
	cout << "\t\t\t3.		계산 내역	☞  ";
	cin >> num;

	switch (num) {
	case 1:
		check_movie();
        break;
    case 2:
        check_r();
        break;
	}
}

//영화 정보를 출력
void check_movie()
{
	int num;
choose:
	system("cls");
	cout << endl << endl << endl;
	cout << "\t\t\t1.		 #살아있다\n";
	cout << "\t\t\t2.		   결백\n";
    cout << "\t\t\t3.		 다크나이트    ☞ ";
	cin >> num;
    int order;
	switch (num) {
	case 1:
		system("cls");
		
		cout << endl << endl << endl;
		cout << "\t\t\t#살아있다." << endl << endl
			<< "\t\t\t<감독>" << endl << "\t\t\t조일형" << endl
			<< "\t\t\t<출연배우>" << endl << "\t\t\t유아인, 박신혜" << endl << endl
			<< "\t\t\t\"원인불명 증세의 사람들의 공격에 통제 불능에 빠진도시에" << endl
			<< "\t\t\t 혼자 고립된 '준우'(유아인)는 아무도 없는 집에 혼자 고립되었다." << endl
			<< "\t\t\t 또다른 생존자 '유빈'(박신혜)이 아직 살아 있음을 알게되고" << endl
			<< "\t\t\t 함께 살아남기 위한 방법을 찾아나선다.\"" << endl << endl;
		cout << "\t\t\t1. 예매 하기\n" << "\t\t\t2. 뒤로		☞ ";
		cin >> order;
        if (order == 1) {
            test::p->set_movie("#살아있다");
            time();
            break;
        }
        else if (order == 2)
            goto choose;
    case 2:
        system("cls");
        cout << endl << endl << endl;
        cout << "\t\t\t결백" << endl << endl
            << "\t\t\t<감독>" << endl << "\t\t\t박상현" << endl
            << "\t\t\t<출연배우>" << endl << "\t\t\t신혜선, 배종옥" << endl << endl
            << "\t\t\t\"아빠의 장례식장에서 벌어진 막걸리 농약 살인사건" << endl
            << "\t\t\t 살인사건의 용의자로 몰린 엄마 '채화자'의 결백을 밝히려는" << endl
            << "\t\t\t 변호사 '안정인', 마을사람들이 은폐하려 한 추악한 진실을" << endl
            << "\t\t\t 마주하게 되는 무죄 입증 추적극.\"" << endl << endl;
        cout << "\t\t\t1. 예매 하기\n" << "\t\t\t2. 뒤로		☞ ";
        cin >> order;
        if (order == 1) {
            test::p->set_movie("결백");
            time();
            break;
        }
        else if (order == 2)
            goto choose;
    case 3:
        system("cls");
        cout << endl << endl << endl;
        cout << "\t\t\t다크나이트" << endl << endl
            << "\t\t\t<감독>" << endl << "\t\t\t크리스토퍼 놀란" << endl
            << "\t\t\t<출연배우>" << endl << "\t\t\t크리스찬 베일, 게리 올드만" << endl << endl
            << "\t\t\t\"범죄와 부정부패를 제거하고 고담시를 지키려는 베트맨" << endl
            << "\t\t\t 그는 짐 고든 형사와 고담시 지방검사 하비 덴트와 함께" << endl
            << "\t\t\t 도시를 범죄 조직으로부터 구원하고자 한다.\"" << endl
            << endl << endl;
        cout << "\t\t\t1. 예매 하기\n" << "\t\t\t2. 뒤로		☞ ";
        cin >> order;
        if (order == 1) {
            test::p->set_movie("다크나이트");
            time();
            break;
        }
        else if (order == 2)
            goto choose;
    case 4:
        system("cls");
        show_menu();
	}
}

void time()
{
	int num;
	cout << endl << endl << endl
		<< "\t\t\t시간 선택" << endl << endl
		<< "\t\t\t1. <09:00>		2. <11:00>		3. <13:00>"
		<< endl << endl << "\t\t\t☞ ";
	cin >> num;
	if (num == 1)
		test::p->set_time("09:00");
	else if (num == 2)
		test::p->set_time("11:00");
	else if (num == 3)
		test::p->set_time("13:00");
	else
		cout << "\t\t\t☞ ";

	seat();
}

void seat()
{
    system("cls");
choose:
    int row, col;
    int input; // for문을 돌릴때 필요한 변수.
    char rows = '1'; // 행과 열의 시작을 0이 아닌 1로
    char c; //추가 예매 [y] or [n]
    //char book1;
    string arr[6][9] = { {"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},
                         {"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},
                         {"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},
                         {"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},
                         {"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},
                         {"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"} };
    cout << endl << endl << endl;
    cout << "\t\t\t            1   2   3   4   5   6   7   8   9" << endl;
    for (int i = 0; i < 6; ++i)
    {
        cout << "\t\t\t    행 " << rows << ":  ";
        rows++;
        for (int j = 0; j < 9; ++j)
            cout << arr[i][j] << " ";
        cout << endl;
    }

again:
    rows = '1';
    for (input = 1; input < 55; input++)
    {
        rows = '1';
        cout << endl << "\t\t                       행 열 입력: ";
        cin >> row >> col;

        if (row <= 0 || col <= 0)
        {
            cout << endl << "\t\t               다시 입력 해주세요" << endl;
            Sleep(500);
            system("cls");
            goto choose;
        }
        --row;
        --col;
        if (arr[row][col] == "[X]")
        {
            cout << endl << "\t\t             이미 예약된 자리 입니다." << endl;
            goto again;
        }
        //arr[input][input + 1] = arr[row][col];
        arr[row][col] = "[X]";
        people_number++;
        total_money += 10000;
        system("cls");
        cout << endl << endl << endl;
        cout << "\t\t\t            1   2   3   4   5   6   7   8   9" << endl;
        for (int i = 0; i < 6; ++i)
        {
            cout << "\t\t\t    행 " << rows << ":  ";
            ++rows;
            for (int j = 0; j < 9; ++j)
                cout << arr[i][j] << " ";
            cout << endl;
        }
        cout << endl << endl << endl
            << "\t\t                       추가로 예매 하시겠습니까?" << endl
            << "\t\t                               [Y] or [N]." << endl
            << "\t\t                        ☞ ";

        cin >> c;
        if (c == 'y' || c == 'Y')
            continue;
        else if (c == 'n' || c == 'N')
            break;
    }
    cout << endl << endl << endl
        << "\t\t\t\t이용해 주셔서 감사합니다." << endl;
    Sleep(2000);
    system("cls");
    show_menu();
}

void check_r()
{
    system("cls");
    cout << endl << endl << endl;
    cout << "\t\t\t " << test::a.get_title() << endl << endl
        << "\t\t\t " << "시간 : " << test::a.get_time() << endl
        << "\t\t\t " << "인원 : " << people_number << endl
        << "\t\t\t " << "가격 : " << total_money << endl
        << "\t\t\t " << "감사합니다." << endl;
}
