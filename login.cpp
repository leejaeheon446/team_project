```c
#include <iostream>
#include <stdlib.h>
using namespace std;

int cplMainMenu(int&, string&, string&);         
int mainMenuVal(int&, string&, string&);       
int createAccount(string&, string&);             
int loginMenu(int&, string&, string&);          
int userPickVal(int&, string&, string&);         



int main()
{

    int userPick = 0;
    string username;
    string password;

    cplMainMenu(userPick, username, password);

}


int cplMainMenu(int &userPick, string &username, string &password)
{
        cout << "-------------------------------------------\n";
        cout << "               help cinema\n";
        cout << "-------------------------------------------\n" << endl;
        cout << "Please select an option from the menu below: \n";
        cout << "1. 로그인\n";
        cout << "2. 계정 생성\n";
        cout << "3. 종료\n" << endl;
        cout << "Please select your choice: ";
        cin >> userPick;

        mainMenuVal(userPick, username, password);
        userPickVal(userPick, username, password);

            return userPick;
}

int mainMenuVal(int &userPick, string &username, string &password)
{
    while (userPick < 1 || userPick > 3)
    {
        cout << endl;
        cout << "**ERROR** - Invalid option. Please enter 1, 2, or 3.\n" << endl;
        userPick = cplMainMenu(userPick, username, password);
    }
    return 0;
}

int createAccount(string &username, string &password)
{

        cout << "-------------------------------------------\n";
        cout << "                   계정 생성\n";
        cout << "-------------------------------------------\n" << endl;
        cout << "ID 입력: ";
        cin >> username;
        cout << "password 입력: ";
        cin >> password;
        cout << "\nINFO: 계정이 생성 되었습니다!\n";
        cout <<endl;

    return 0;

}


int loginMenu(int &userPick, string &username, string &password)
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

                    else if (password2!= password)
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


int userPickVal(int &userPick, string &username, string &password)
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

