// Exercise 4: Write a C++ program that prompts the user to enter an integer and determines wether it
// is divisible by both 5 and 6, wether it is divisible by 5 or 6, and wether it is not divisible by both 5
// and 6

// Solve:
#include <iostream>

using namespace std;

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;

	int result;
	if (num % 5 == 0 && num % 6 == 0) 
		result = 1;
	else if (num % 5 == 0 || num % 6 == 0) 
		result = 0;
	else
		result = -1;

	switch (result) {
	case 1:
		cout << "number is divisible by 5 and 6" << endl;
		break;
	case 0:
		cout << "number is divisible by either 5 or 6" << endl;
		break;
	default:
		cout << "number is neither divisible by 5 nor 6" << endl;
	}
	return 0;
}