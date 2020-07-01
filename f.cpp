#include "f.h"

string password = "12345"; // 예약취소할 때 필요한 비밀번호
int total_money = 0; // 총 금액
int people_number = 0; // 사람 수

my_reservation a; // 예매한 내용을 저장하는 클래스
my_reservation* p = &a;

void show_menu()
{
    system("cls");
    int num;
    cout << endl << endl << endl;
    cout << "\t\t\t1.		영화 조회\n";
    cout << "\t\t\t2.		예매 확인\n";
    cout << "\t\t\t3.		예약 취소	☞  ";
    cin >> num;

    switch (num) {
    case 1:
        check_movie();
        break;
    case 2:
        check_r();
        break;
    case 3:
        cancel_r();
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
    cout << "\t\t\t1.		 살아있다\n";
    cout << "\t\t\t2.		   결백\n";
    cout << "\t\t\t3.		 다크나이트    ☞ ";
    cin >> num;
    int order;
    switch (num) {
    case 1:
        system("cls");

        cout << endl << endl << endl;
        cout << "\t\t\t\t        < 주요 정보 >" << endl << endl;
        cout << "\t\t\t제목 : 살아있다." << endl << endl
            << "\t\t\t<감독>" << endl << endl << "\t\t\t조일형" << endl << endl
            << "\t\t\t<출연배우>" << endl << endl << "\t\t\t유아인, 박신혜" << endl << endl;
        cout << "\t\t\t<줄거리>" << endl << endl;
        cout << "\t\t\t\"원인불명 증세의 사람들의 공격에 통제 불능에 빠진도시에" << endl
            << "\t\t\t 혼자 고립된 '준우'(유아인)는 아무도 없는 집에 혼자 고립되었다." << endl
            << "\t\t\t 또다른 생존자 '유빈'(박신혜)이 아직 살아 있음을 알게되고" << endl
            << "\t\t\t 함께 살아남기 위한 방법을 찾아나선다.\"" << endl << endl;
        cout << "\t\t\t1. 예매 하기\n" << "\t\t\t2. 뒤로		☞ ";
        cin >> order;
        if (order == 1) {
            p->set_movie("살아있다");
            time();
            break;
        }
        else if (order == 2)
            goto choose;
    case 2:
        system("cls");
        cout << endl << endl << endl;
        cout << "\t\t\t\t        < 주요 정보 >" << endl << endl;
        cout << "\t\t\t제목 : 결백" << endl << endl
            << "\t\t\t<감독>" << endl << endl << "\t\t\t박상현" << endl << endl
            << "\t\t\t<출연배우>" << endl << endl << "\t\t\t신혜선, 배종옥" << endl << endl;
        cout << "\t\t\t<줄거리>" << endl << endl;

        cout<< "\t\t\t\"아빠의 장례식장에서 벌어진 막걸리 농약 살인사건" << endl
            << "\t\t\t 살인사건의 용의자로 몰린 엄마 '채화자'의 결백을 밝히려는" << endl
            << "\t\t\t 변호사 '안정인', 마을사람들이 은폐하려 한 추악한 진실을" << endl
            << "\t\t\t 마주하게 되는 무죄 입증 추적극.\"" << endl << endl;
        cout << "\t\t\t1. 예매 하기\n" << "\t\t\t2. 뒤로		☞ ";
        cin >> order;
        if (order == 1) {
            p->set_movie("결백");
            time();
            break;
        }
        else if (order == 2)
            goto choose;
    case 3:
        system("cls");
        cout << endl << endl << endl;
        cout << "\t\t\t\t        < 주요 정보 >" << endl << endl;
        cout << "\t\t\t제목 : 다크나이트" << endl << endl
            << "\t\t\t<감독>" << endl << endl << "\t\t\t크리스토퍼 놀란" << endl << endl
            << "\t\t\t<출연배우>" << endl << endl << "\t\t\t크리스찬 베일, 게리 올드만" << endl << endl;
        cout << "\t\t\t<줄거리>" << endl << endl;
        cout << "\t\t\t\"범죄와 부정부패를 제거하고 고담시를 지키려는 베트맨" << endl
            << "\t\t\t 그는 짐 고든 형사와 고담시 지방검사 하비 덴트와 함께" << endl
            << "\t\t\t 도시를 범죄 조직으로부터 구원하고자 한다.\"" << endl
            << endl << endl;
        cout << "\t\t\t1. 예매 하기\n" << "\t\t\t2. 뒤로		☞ ";
        cin >> order;
        if (order == 1) {
            p->set_movie("다크나이트");
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
        p->set_time("09:00");
    else if (num == 2)
        p->set_time("11:00");
    else if (num == 3)
        p->set_time("13:00");
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
    cout << "\t\t\t                        좌석 예매" << endl << endl;
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
        << "\t\t\t\t\t 예약 되었습니다. " << endl;
    Sleep(2000);
    system("cls");
    snack_menu();

}
int snack[5] = {}; // 주문한 snack의 정보를 저장하는 배열 최대 5개까지 주문가능
void snack_menu()
{
    int num, i = 0;
    char c;
    cout << endl << endl << endl;
    cout << "\t\t\t               ┏━━━━━━ Help Cinema━━━━━━┓" << endl;
    cout << "\t\t\t               ┃                        ┃" << endl;
    cout << "\t\t\t               ┃ 1. 팝콘     :  8000원  ┃" << endl;
    cout << "\t\t\t               ┃ 2. 오징어   :  5000원  ┃" << endl;
    cout << "\t\t\t               ┃ 3. 나쵸     :  3000원  ┃" << endl;
    cout << "\t\t\t               ┃ 4. 종료                ┃" << endl;
    cout << "\t\t\t               ┃                        ┃" << endl;
    cout << "\t\t\t               ┗━━━━━━━━━━━━━━━━━━━━━━━━┛" << endl << endl;

choose:
    cout << "\t\t\t\t\t주문번호 입력 ☞ ";
    cin >> num;
    switch (num) {
    case 1:
        cout << "\t\t\t팝콘 추가" << endl;
        total_money += 8000;
        snack[i] = 1;
        i++;
        break;
    case 2:
        cout << "\t\t\t오징어 추가" << endl;
        total_money += 5000;
        snack[i] = 2;
        i++;
        break;
    case 3:
        cout << "\t\t\t나쵸 추가" << endl;
        total_money += 3000;
        snack[i] = 3;
        i++;
        break;
    case 4:
        cout << "\t\t\t간식 없음" << endl;
        show_menu();
        break;
    }
    cout << "\n\t\t\t추가로 주문 하시겠습니까? [Y] or [N]"
        << "\n\t\t\t☞ ";
    cin >> c;
    if (c == 'y' || c == 'Y')
        goto choose;
    else if (c == 'n' || c == 'N')
        show_menu();
}

void check_r()
{
    system("cls");
    int num;
    cout << endl << endl << endl;
    if (a.get_title() == "\0") {
        cout << "\t\t\t예약 내용이 없습니다." << endl;
        Sleep(1500);
        show_menu();
    }
    else {
        cout << "\t\t\t " << "제목 : " << a.get_title() << endl << endl
            << "\t\t\t " << "시간 : " << a.get_time() << endl << endl
            << "\t\t\t " << "인원 : " << people_number << " 명" << endl << endl
            << "\t\t\t " << "간식 : " << endl; print_snack();
        cout << endl
            << "\t\t\t " << "가격 : " << total_money << " 원" << endl << endl;
        cout << "\n\t\t\t 1. 뒤로  ☞ ";
        cin >> num;
        if (num)
            show_menu();

    }
}

void cancel_r()
{
    system("cls");
    char c;
    string _password;
    cout << endl << endl << endl;
    if (a.get_title() == "\0" ) {
        cout << "\t\t\t예약 내용이 없습니다." << endl;
        Sleep(1500);
        show_menu();
    }
    else {
        cout << "\t\t\t " << "제목 : " << a.get_title() << endl << endl
            << "\t\t\t " << "시간 : " << a.get_time() << endl << endl
            << "\t\t\t " << "인원 : " << people_number << " 명" << endl << endl
            << "\t\t\t " << "가격 : " << total_money << " 원" << endl << endl;
    }

    cout << "\t\t\t 예약을 취소하시겠습니까? [Y] or [N] ";
    cin >> c;

    if (c == 'y' || c == 'Y')
    {
        cout << "\n\t\t\tHELP CGV 관리자 인증 비밀번호를 입력해주세요 ";
        cin >> _password;
        if (_password == password) {
            a.set_movie("\0");
            a.set_time("\0");
            cout << "\n\t\t\t예약이 취소 되었습니다.";
            Sleep(1500);
            show_menu();
        }
        else {
            cout << "비밀번호가 틀렸습니다.";
            Sleep(1500);
            show_menu();
        }
    }

    else if (c == 'n' || c == 'N')
        show_menu();
}

void print_snack()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (snack[i] == 1)
            cout << "팝콘 추가" << endl;
        else if (snack[i] == 2)
            cout << "오징어 추가" << endl;
        else if (snack[i] == 3)
            cout << "나쵸 추가" << endl;
        else if (snack[i] == 4)
            cout << "간식 없음" << endl;
        else
            break;

        cout << "\t\t\t\t";
    }
}
