// Exercise 1: Write a C++ program that reads two integers (num1, num2) and find their:
// 1. Summation (hint: num1 + num2)
// 2. Multiplication (hint: num1 * num2)
// 3. Subtraction (hint: num1 - num2)
// 4. Division (hint: num1/num2)
// 5. Remainder (hint: num1 % num2)

// Solve:
#include <iostream>

using namespace std;

int main() {
	int num1, num2;

	cout << "Enter two integers seperated by spaces: ";
	cin >> num1 >> num2;

	cout << endl;

	cout << "Summation: " << num1 + num2 << endl;
	cout << "Multiplication: " << num1 * num2 << endl;
	cout << "Subtraction: " << num1 - num2 << endl;
	cout << "Division: " << num1 / num2 << endl;
	cout << "Remainder: " << num1 % num2 << endl;

	return 0;
}