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
        cout << "1. Login\n";
        cout << "2. Create a New Account\n";
        cout << "3. Quit\n" << endl;
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
        cout << "             Create an Account\n";
        cout << "-------------------------------------------\n" << endl;
        cout << "Enter the user name of your choice: ";
        cin >> username;
        cout << "Enter a password of your choice: ";
        cin >> password;
        cout << "\nINFO: Your account has been created successfully!\n";
        cout <<endl;

    return 0;

}


int loginMenu(int &userPick, string &username, string &password)
{
        string username2;
        string password2;

        cout << "-------------------------------------------\n";
        cout << "             Log into your Account\n";
        cout << "-------------------------------------------\n" << endl;
        cout << "Enter your user name: ";
        cin >> username2;

            if (username2 == username)
            {
                cout << "\nEnter your Password: ";
                cin >> password2;

                    if (password2 == password)
                        {
                            cout << "\nLogin Successful!" << endl;
                            int userChoice = 0;
                        }

                    else if (password2!= password)
                        {
                            cout << "\n";
                            cout << "ERROR: Incorrect Password!\n";
                            cout << "\n";
                            cplMainMenu(userPick, username, password);
                        }

                    else
                        {
                            cout << "INTERNAL ERROR!";
                        }
            }

            else if (username2 != username)
                {
                    cout << "\n";
                    cout << "ERROR: Incorrect User name!\n";
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
            cout << "\nThank you for using!\n";
            exit(0);
            break;

        default:
            cout << "INTERNAL ERROR" << endl;
    }
    return 0;
}

