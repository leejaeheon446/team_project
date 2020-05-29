```c
#include <iostream>

using namespace std;

class TV {
	bool powerOn;
	int channel;
	int volume;

public:
	void on()
	{
		powerOn = true;
		cout << "TV를 켰습니다." << endl;
	}

	void off()
	{
		powerOn = false;
		cout << "TV를 껐습니다." << endl;
	}

	void setChannel(int cnl)
	{
		if (cnl >= 1 && cnl <= 999)
		{
			channel = cnl;
			cout << "채널을 " << cnl << "(으)로 바꿨습니다." << endl;
		}
	}

	void setVolume(int vol)
	{
		if (vol >= 0 && vol <= 100)
		{
			volume = vol;
			cout << "볼륨을 " << vol << "(으)로 바꿨씁니다." << endl;
		}
	}
};

int main()
{
	TV lg;

	lg.on();
	lg.setChannel(10);
	lg.setVolume(50);
}
