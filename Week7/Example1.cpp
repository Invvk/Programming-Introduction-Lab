// Example 1: predefined functions

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x;
	double u = 4.2, v = 3.0;
	cout << "\t " << u << " to the power of " << v << " = " << pow(u, v) << endl;
	cout << "5.0 to the power of 4 = " << pow(5.0, 4) << endl;
	u = u + pow(3.0, 3);
	cout << "u = " << u << endl;
	x = -15;
	cout << "Absolute value of x is " << abs(x) << endl;
	return 0;
}