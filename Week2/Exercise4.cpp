// Exercise 4: Write a C++ program that reads the temperature in Fahrenheit and converts it into Celsius
// (Hint: Celsius = ((5/9) * (fahrenheit - 32)))

// Solve:
#include <iostream>

using namespace std;

int main() {
	// if it is set to int this will not work and it will keep returning 0 in celsius
	double fahrenheit;
	cout << "Enter temperature in fahrenheit: ";
	cin >> fahrenheit;
	cout << endl;

	double celsius = ((5.0 / 9.0) * (fahrenheit - 32));
	cout << "Celsius = " << celsius << endl;
	return 0;
}