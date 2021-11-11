// Exercise 8: write a C++ program that prints the following shape

// Solve:
// This is the closest shape I got
//*     *****     *****     *
//**     ****     ****     **
//***     ***     ***     ***
//****     **     **     ****
//*****     *     *     *****

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	for (int r = 1; r <= 5; r++) {
		for (int c = 1; c <= r; c++)
			cout << setw(1) << "*";

		cout << " " << setw(5);

		for (int c = 6 - r; c > 0; c--)
			cout << "*" << setw(1);

		cout << " " << setw(5);

		for (int c = 6 - r; c > 0; c--)
			cout << "*" << setw(1);

		cout << " " << setw(5);

		for (int c = 1; c <= r; c++)
			cout << "*" << setw(1);

		cout << endl;
	}

	return 0;
}