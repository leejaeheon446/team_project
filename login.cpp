```cpp
// login.cpp

#include"f.h"

void login();
int cplMainMenu(int&, string&, string&);
int mainMenuVal(int&, string&, string&);
int createAccount(string&, string&);
int loginMenu(int&, string&, string&);
int userPickVal(int&, string&, string&);



void login()
{

    int userPick = 0;
    string username;
    string password;

    cplMainMenu(userPick, username, password);

}


int cplMainMenu(int& userPick, string& username, string& password)
{
    cout << endl << endl << endl;
    cout << "\t\t\t-------------------------------------------\n";
    cout << "\t\t\t                   my cgv\n";
    cout << "\t\t\t-------------------------------------------\n" << endl;
    cout << "\t\t\t                1. 로그인\n";
    cout << "\t\t\t                2. 계정 생성\n";
    cout << "\t\t\t                3. 종료\n" << endl;
    cout << "\t\t\t                입력 : ";
    cin >> userPick;

    mainMenuVal(userPick, username, password);
    system("cls");
    userPickVal(userPick, username, password);

    return userPick;
}

int mainMenuVal(int& userPick, string& username, string& password)
{
    while (userPick < 1 || userPick > 3)
    {
        cout << endl;
        cout << "\t\t\t**ERROR** - 1~3을 입력해주세요 .\n" << endl;
        Sleep(1500);
        system("cls");  
        userPick = cplMainMenu(userPick, username, password);
    }
    return 0;
}

int createAccount(string& username, string& password)
{
    cout << endl << endl << endl;
    cout << "\t\t\t-------------------------------------------\n";
    cout << "\t\t\t                   계정 생성\n";
    cout << "\t\t\t-------------------------------------------\n" << endl;

    
    /*
    cout << "\t\t\t                 ID 입력: ";
    cin >> username;
    cout << "\t\t\t                 password 입력: ";
    cin >> password;
    cout << "\n\t\t\t        INFO: 계정이 생성 되었습니다!\n";
    cout << endl;
    */
    return 0;

}


int loginMenu(int& userPick, string& username, string& password)
{
    string username2;
    string password2;

    cout << "-------------------------------------------\n";
    cout << "                계정 로그인\n";
    cout << "-------------------------------------------\n" << endl;
    cout << "ID 입력: ";
    cin >> username2;

    if (username2 == username)
    {
        cout << "\npassword : ";
        cin >> password2;

        if (password2 == password)
        {
            cout << "\n로그인 성공!" << endl;
            int userChoice = 0;
        }

        else if (password2 != password)
        {
            cout << "\n";
            cout << "ERROR: password 불일치!\n";
            cout << "\n";
            cplMainMenu(userPick, username, password);
        }

        else
        {
            cout << "오류!";
        }
    }

    else if (username2 != username)
    {
        cout << "\n";
        cout << "ERROR: ID 불일치!\n";
        cout << "\n";
        cplMainMenu(userPick, username, password);
    }
    else
    {
        cout << "internal error 2";
    }

    return 0;
}


int userPickVal(int& userPick, string& username, string& password)
{

    switch (userPick)
    {

    case 1:
        loginMenu(userPick, username, password);
        break;

    case 2:
        createAccount(username, password);
        cplMainMenu(userPick, username, password);
        break;

    case 3:
        cout << "\n이용해주셔서 감사합니다!\n";
        exit(0);
        break;

    default:
        cout << "오류" << endl;
    }
    return 0;
}

