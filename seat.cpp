```c
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
    choose:
    string seat[]={"x1","y1","x2","y2","x3","y3","x4","y4","x5","y5","x6","y6","x7","y7","x8","y8","x9","y9","x10","y10","x11","y11","x12","y12","x13","y13","x14","y14","x15","y15","x16","y16","x17","y17","x18","y18","x19","y19","x20","y20","x21","y21","x22","y22","x23","y23","x24","y24","x25","y25","x26","y26","x27","y27","x28","y28","x29","y29","x30","y30","x31","y31","x32","y32","x33","y33","x34","y34","x35","y35","x36","y36"};
    int row,col;
    int input;
    char rows='1';
    char c;
    char book1;
    string arr[6][9]={{"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},{"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},{"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},{"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},
    {"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"},{"[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]","[ ]"}};
    cout<<"\t\t            1   2   3   4   5   6   7   8   9"<<endl;
    for(int i=0; i<6; ++i)
    {
        cout<<"\t\t   Row "<<rows<<":  ";
        ++rows;
        for(int j=0; j<9; ++j)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    again:
    rows='1';
    for(input=1; input<55; input=input+2)
    {
        rows='1';
        cout<<endl<<"\t\t               Enter Row & Column: ";
        cin>>row>>col;
        if (row<=0 || col<=0)
        {
            cout<<endl<<"\t\t              Please Pick A Valid Seat"<<endl;
            Sleep(500);
            system("cls");
            goto choose;
        }
        --row;
        --col;
        if(arr[row][col]=="[X]")
        {
            cout<<endl<<"\t\t             Seat Not Available"<<endl;
            goto again;
        }
        arr[input][input+1]=arr[row][col];
        arr[row][col]="[X]";
        system("cls");
        cout<<endl;
        cout<<"\t\t            1   2   3   4   5   6   7   8   9"<<endl;
        for(int i=0; i<6; ++i)
        {
            cout<<"\t\t   Row "<<rows<<":  ";
            ++rows;
            for(int j=0; j<9; ++j)
               cout<<arr[i][j]<<" ";
            cout<<endl;
        }
        cout<<endl<<"\t\t                   Seat Booked!"<<endl;
        cout<<endl<<"\t\t        Do You Want To Book Another Seat?"<<endl;
        cout<<"\t\t          Press [Y] For Yes & [N] For No."<<endl;
        cout<<"\t\t                        ";

        cin>>c;
        if(c=='y' || c=='Y')
            continue;
        else if(c=='n' || c=='N')
        break;
    }
}
