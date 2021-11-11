// Exercise 2: Write a C++ program that reads the length of a square and calculate its:
// 1. Circumference (hint: sq_circum= 4 * length)
// 2. Area (hint: sq_area = length ^ 2)

// Solve:
#include <iostream>

using namespace std;

int main() {
	int length;

	cout << "Enter the length of a square: ";
	cin >> length;

	cout << endl;

	int sq_circum = 4 * length;
	int sq_area = length * length;

	cout << "Circumference = " << sq_circum << endl;
	cout << "Area = " << sq_area << endl;
	return 0;
}