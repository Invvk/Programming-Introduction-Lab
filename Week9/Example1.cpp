// Example 1: function overloading

#include <iostream>

using namespace std;

int max(int x1, int x2);
double max(double x1, double x2);
float max(float x1, float x2);

void swap(int& x1, int& x2);
void swap(double& x1, double& x2);
void swap(char& x1, char x2);
void swap(string& x1, string x2);

int main() {
	char c1 = 'a', c2 = 'b';
	int x = 10, y = 15;
	double d1 = 10.2, d2 = 90.88;
	float f1 = 223.33, f2 = 423.13;
	string str1 = "something", str2 = "nothing";
	swap(str1, str2);
	cout << str1 << "\t" << str2 << endl;
	swap(d1, d2);
	cout << d1 << "\t" << d2 << endl;
	swap(x, y);
	cout << x << "\t" << y << endl;
	swap(c1, c2);
	cout << c1 << "\t" << c2 << endl;
	cout << max(x, y) << endl;
	cout << max(d1, d2) << endl;
	cout << max(f1, f2) << endl;

	// cout << max(str1, f2) << endl; <- error
	return 0;
}

int max(int x1, int x2) {
	if (x1 > x2)
		return x1;
	return x2;
}
double max(double x1, double x2) {
	if (x1 > x2)
		return x1;
	return x2;
}
float max(float x1, float x2) {
	if (x1 > x2)
		return x1;
	return x2;
}

void swap(int& x1, int& x2) {
	x1 = x1 + x2;
	x2 = x1 - x2;
	x1 = x1 - x2;
}
void swap(double& x1, double& x2) {
	x1 = x1 + x2;
	x2 = x1 - x2;
	x1 = x1 - x2;
}
void swap(char& x1, char x2) {
	char temp = x1;
	x1 = x2;
	x2 = temp;
}
void swap(string& x1, string x2) {
	string temp = x1;
	x1 = x2;
	x2 = temp;
}
