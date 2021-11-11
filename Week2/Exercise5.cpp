// Exercise 5: Write a C++ program that reads a three-digit integer and calculate and 
// prints the sum of all its digits
// (Hint: use div and mod in your program)

// Solve:
#include <iostream>

using namespace std;

int main() {
	int input;
	cout << "write a 3 digit number: ";
	cin >> input;
	cout << endl;

	int num1 = input % 10;
	input = input / 10;

	int num2 = input % 10;
	input = input / 10;

	int num3 = input % 10;
	input = input / 10;

	int sum = num1 + num2 + num3;

	cout << "Sum of the 3 digits is: " << sum << endl;
	return 0;
}