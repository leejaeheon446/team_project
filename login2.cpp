```c

#include <iostream>
#include <cwindow.h>
#include <conio.h>
#include <iomanip>
using namespace std;

#define IDMAX			10
#define PWMAX			10
#define BACKSPACE		0x08
#define ENTER			0x0d
#define F1				0x3b
#define F2				0x3c
#define ESC				0x1b

void LoginPRINT();
const int LoginINPUTFUNC();
bool confirmID(const char *id);
void gotoxy(const int x, const int y);
bool confirmPW(const char *pw);


void LoginPRINT()
{/*┏━┓┛┳ ┻ ╋┣ ┫ ┗━┛┃*/
	gotoxy(20, 8);	cout<<"┏━━━━━┳━━━━━━━━━━━┓";
	gotoxy(20, 9);	cout<<"┃ID        ┃                      ┃";
	gotoxy(20, 10);	cout<<"┣━━━━━╋━━━━━━━━━━━┫";
	gotoxy(20, 11);	cout<<"┃PW        ┃                      ┃";
	gotoxy(20, 12);	cout<<"┣━━━━━┻━━┳━━━━━━━━┫";
	gotoxy(20, 13);	cout<<"┃[F1] 회원 가입  ┃[F2] 초기화     ┃";
	gotoxy(20, 14);	cout<<"┣━━━━━━━━┻━━━━━━━━┫";
	gotoxy(20, 15);	cout<<"┃[ESC] 프로그램 종료               ┃";
	gotoxy(20, 16);	cout<<"┗━━━━━━━━━━━━━━━━━┛";
}



/***************************************************************************************
* const int LoginINPUTFUNC()
****************************************************************************************
* 기능			:: ID값과 PW값 입력
				:: 글자수 제한 (10글자 이내)
				:: 입력 위치 제한
				:: NULL값 제한
				:: 비밀번호 입력시 캐릭터 변환
				:: F1 입력시 회원가입 모드로 전환
				:: F2 입력시 ID, PW 재입력
				:: ESC 입력시 프로그램 종료
****************************************************************************************
* 리턴값		:: const int 
				:: FAIL(-1)		== 로그인 도중 취소 되었거나 회원가입모드로 전환시
				:: SUCCESS(1)	== 성공적인 로그인
				:: EXIT(0)		== 프로그램 종료
****************************************************************************************
* 매개변수		:: void
****************************************************************************************
* 변수			:: enum 리턴값 명시화
				:: wordcount 글자 수 파악 변수 
				:: ch 키 입력값 저장 변수
				:: ID, PW 아이디, 비밀번호 저장 변수 
****************************************************************************************/
const int LoginINPUTFUNC()
{
	enum {FAIL = -1, EXIT = 0 , SUCCESS = 1 };
	unsigned short wordcount = 0; 
	char ch;
	char ID[IDMAX], PW[PWMAX];
	ID[0] = '\0', PW[0] = '\0';
	
	LoginPRINT();

	RESTART_INPUT:
	if(strlen(ID)!= 0 || strlen(PW) != 0)
	{		gotoxy(34, 9);		cout<<setw(20)<<" ";	ID[0] = '\0';	wordcount =0;
			gotoxy(34, 11);		cout<<setw(20)<<" ";	PW[0] = '\0';	fflush(stdin);			}

	gotoxy(34, 9);/* 입력 위치 이동. */
	while(1)
	{	
		if((ch =getch()) == ENTER && wordcount == 0) /* NULL값 제어*/
			gotoxy(34, 9);
		else if(ch == ENTER)break;	/*입력 완료 */
		else if(ch == ';')continue;
		else if(ch == F1){	/* 호출 0*/		return FAIL;}/* 회원가입 모듈 호출 */
		else if(ch == F2){	goto RESTART_INPUT;			}/* 아이디 비밀번호 재입력*/
		else if(wordcount < 10)/* id 입력제어 글자수 10개로 제한 */
		{
			if(ch != BACKSPACE)/* 글자 출력..  */
			{	ID[wordcount] =ch;	wordcount++;		putch(ch);	ID[wordcount]='\0';			}
			else {
				if(wordcount > 0)/* 한글자 지우기 */
				{	wordcount--;	cout<<"\b \b";	ID[wordcount] = '\0';						}
			}
		}
		else if(ch == BACKSPACE){/* 입력 라인 넘어가지 않게 제어 */
			if(wordcount > 0)
			{		wordcount--;		cout<<"\b \b";	ID[wordcount] = '\0';					}
		}
		fflush(stdin);
	}wordcount =0;

	gotoxy(34, 11);	
	while(1)
	{
		if((ch =getch()) == ENTER && wordcount == 0)
			gotoxy(34, 11);
		else if(ch == ';')continue;					
		else if(ch == ENTER)break;
		else if(ch == F1){	return FAIL;			}/* 회원가입 모듈호출 */
		else if(ch == F2){	goto RESTART_INPUT;		}/* 아이디 비밀번호 재입력*/
		else if(ch == ESC)
			return EXIT;
		else if(wordcount < 10)/* id 입력제어 글자수 10개로 제한 */
		{
			if(ch != BACKSPACE)
			{	PW[wordcount++] = ch;	PW[wordcount] = '\0';	putch('*');		}
			else{
				if(wordcount > 0)
				{	wordcount--;	cout<<"\b \b";		PW[wordcount] = '\0';	}
			}
		}
		else if(ch == BACKSPACE){
			if(wordcount > 0)
			{	wordcount--;	cout<<"\b \b";		PW[wordcount] = '\0';		}
		}
		fflush(stdin);
	}
	puts(ID);puts(PW);
	return SUCCESS;
}

void main()
{
	LoginINPUTFUNC();
}



/**************************************************************************************
* void gotoxy(int x, int y)
***************************************************************************************	
* 기능			:: 콘솔 커서 위치 변경
***************************************************************************************	
* 리턴값		:: void
***************************************************************************************	
* 매개변수		:: X == x좌표(가로)
				   Y == y좌료(세로)
					  -- 콘솔창 왼쪽 최상단 좌표는 0, 0
					  -- default 크기 한줄의 x좌표값은 79
***************************************************************************************/
void gotoxy(const int x, const int y)
{
	COORD scrn;    
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = x; scrn.Y = y;
	SetConsoleCursorPosition(hOuput,scrn);
}





/**************************************************************************************
* bool confirmID(const char *id)
***************************************************************************************
* 기능			:: ID 입력값의 정상유무 판단
***************************************************************************************
* 리턴값		:: bool -  입력이 부적절할때 false,  성공적인 입력일때 true;
***************************************************************************************
* 매개변수		:: id == id 가 입력된 변수.
***************************************************************************************/
bool confirmID(const char *id)
{
	/*ID는 최소 6글자 이상이어야 한다.*/
	if(strlen(id) < 5)
		return false;
	
	/* ID 첫글자는 숫자이면 안된다 */
	else if(id[0] >= '0' && id[0] <= '9')
		return false;
	
	/* ID 첫글자는 무조건 영문이어야 한다 */
	else if(!(id[0] >= 'a' && id[0] <= 'z'))
		if(!(id[0] >= 'A' && id[0] <= 'Z'))
			return false;
		
			/*else if()
			return false;
		*/
		return true;
}




/**************************************************************************************
* bool confirmPW(const char *pw)
***************************************************************************************
* 기능			:: PW 입력값의 정상유무 판단
***************************************************************************************
* 리턴값		:: bool -  입력이 부적절할때 false,  성공적인 입력일때 true;
***************************************************************************************
* 매개변수		:: pw == pw 가 입력된 변수.
***************************************************************************************/
bool confirmPW(const char *pw)
{
	int i = 0; 
	bool alpha = false, integer = false;
	if(strlen(pw)< 6)
		return false;
	
	while(i++ < strlen(pw))
	{
		if(pw[i] == ';')return false;
		if(pw[i] < '0' || pw[i] > '9')
			alpha = true;	
		if(pw[i] >= '0' && pw[i] <= '9')
			integer = true;
		if(alpha == true && integer == true)
			break;
	}
	/* 비밀번호는 영문과 숫자 혼합이어야 한다. */
	if(alpha == false || integer == false)
		return false;
	/* 입력한 회원 아이디 도일하면 false*/
	/*else if(!strcmp(입력한 아이디, pw))
	return false;*/
	return true;
}
