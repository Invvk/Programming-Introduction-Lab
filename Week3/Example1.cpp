// Example 1: Create a C++ program that states wether an input number is positive, negative, or zero.

// Solve:
#include <iostream>

using namespace std;

int main() {
	double x;
	cout << "Enter a number: ";
	cin >> x;
	cout << endl;

	if (x == 0)
		cout << "the number is zero";
	else
		if (x > 0)
			cout << "the number is positive";
		else
			cout << "the number is negative";
	return 0;
}