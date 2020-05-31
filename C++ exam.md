```c
#include <iostream>

using namespace std;

// 0-1 float R G B

class Color {
public:
	Color() : r(0), g(0), b(0) {}
	Color(float r, float g, float b) : r(r), g(g), b(b) {}

	float GetR()
	{
		return r;
	}

	float GetB()
	{
		return b;
	}

	float GetG()
	{
		return g;
	}
	
	static Color MixColors(Color a, Color b)
	{
		return Color((a.GetR() + b.GetR()) / 2, (a.GetG(), b.GetG()) / 2, (a.GetB() + b.GetB()) / 2);
	}

private:
	float r;
	float g;
	float b;
};


int main()
{
	Color blue(0, 0, 1);
	Color red(1, 0, 0);

	Color purple = Color :: MixColors(blue, red);

	cout << " -- purple -- " << endl;
	cout << "r = " << purple.GetR() << endl;
	cout << "g = " << purple.GetG() << endl;
	cout << "b = " << purple.GetB() << endl;
}
