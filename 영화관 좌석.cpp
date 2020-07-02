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
