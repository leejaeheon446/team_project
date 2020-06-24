```c
#include<iostream>

#include<string>

using namespace std;

class cMovie {

	char* title;
	char* director;
	double score;

public:

	/*디폴트생성자*/

	cMovie()
	{
		title = NULL;
		director = NULL;
		score = 0.0;
	}

	/*인자값이있는생성자*/

	cMovie(char* t, char* d, double s)
	{
		title = new char[strlen(t) + 1];
		strcpy(title, t);
		director = new char[strlen(d) + 1];
		strcpy(director, d);
		score = s;
	}

	/*멤버함수들*/

	void setTitle(char* t);
	void setDirector(char* d);
	void setScore(double s);
	double getScore();
	void print();

	/*소멸자*/

	~cMovie()
	{
		delete[]title;
		delete[]director;
	}
}
