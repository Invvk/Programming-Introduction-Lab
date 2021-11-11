// Exercise 10: Write a C++ program that calculates the factorial of the integers from 1 to 5
// print the results in tabular format

// Solve:

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int factorial = 0;
	cout << left << setw(6) << setfill(' ') << "num";
	cout << left << setw(8) << setfill(' ') << "factorial";
	cout << endl;

	for (int i = 1; i <= 5; i++) {
		for (int x = 1; x <= i; x++) {
			factorial = factorial * x;
		}
		cout << left << setw(6) << setfill(' ') << i;
		cout << left << setw(8) << setfill(' ') << factorial;
		cout << endl;
		factorial = 1;
	}

	return 0;
}