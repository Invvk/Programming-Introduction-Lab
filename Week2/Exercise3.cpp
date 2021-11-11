// Exercise 3: Write a C++ program that reads the radius of a circle and calculate its area
// (Hint: cir_area = 22/7 * radius^2)

// Solve

#include <iostream>

using namespace std;

int main() {
	int radius;

	cout << "Enter the radius of a circle: ";
	cin >> radius;
	cout << endl;

	int cir_area = (22 / 7) * radius * radius;
	cout << "Circle area: " << cir_area << endl;
	return 0;
}