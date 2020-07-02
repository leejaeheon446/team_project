```cpp
int snack[5] = {}; // 주문한 snack의 정보를 저장하는 배열 최대 5개까지 주문가능

void snack_menu()
{
    int num, i = 0;
    char c;
    cout << endl << endl << endl;
    cout << "\t\t\t\t        간식을 주문하시겠습니까?" << endl << endl;
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

void print_snack()
{
    int i = 0;
    if (snack[i] == 0)
        cout << "없음.";
    for (i = 0; i < 5; i++)
    {
        if (snack[i] == 1)
            cout << "팝콘 추가" << endl;
        else if (snack[i] == 2)
            cout << "오징어 추가" << endl;
        else if (snack[i] == 3)
            cout << "나쵸 추가" << endl;
        else
            break;
        cout << "\t\t\t\t";
    }
}
