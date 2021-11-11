// Example 2: a program to illustrates funtions with default parameters

#include <iostream>
#include <iomanip>

using namespace std;

int volume(int l = 1, int w = 1, int h = 1);
void funcOne(int& x, double y = 12.34, char z = 'B');

int main() {
	int a = 23;
	double b = 48.78;
	char ch = 'M';
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "a = " << a << " b = " << b << " ch = " << ch << endl;
	cout << "Volume = " << volume() << endl;
	cout << "Volume = " << volume(5, 4) << endl;
	cout << "Volume = " << volume(34) << endl;
	cout << "Volume = " << volume(2, 5, 6) << endl;
	funcOne(a);
	funcOne(a, 42.68);
	funcOne(a, 34.65, 'Q');
	cout << "a = " << a << " b = " << b << " ch = " << ch << endl;
	return 0;
}

int volume(int l, int w, int h) {
	return l * w * h;
}
void funcOne(int& x, double y, char z) {
	x = 2 * x;
	cout << "x = " << x << " y = " << y << " z = " << z << endl;
}