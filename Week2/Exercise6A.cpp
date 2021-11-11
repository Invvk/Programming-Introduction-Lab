// Exercise 6 A: write a C++ program that print the value of x and y then swap the values using a 3rd variable
// then reprint the new values of x and y
// consider the following x = 10, y = 5

// Solve:
#include <iostream>

using namespace std;

int main() {
	int x = 10, y = 5;

	cout << "Before Swap: x = " << x << ", y = " << y << endl;

	int swap = x;
	x = y;
	y = swap;

	cout << "After swap: x = " << x << ", y = " << y << endl;
	return 0;
}