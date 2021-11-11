// Exercise 6: Write a C++ program that asks the user to enter two integers, an operator (+, -, *, /)
// then find the result of the entered operation
// (Hint: use switch statement)

// Example: if the user enters '3 5 +' the output should be 3+5=8

// Solve:
#include <iostream>

using namespace std;

int main() {
	int num1, num2;
	char operation;

	cout << "enter two integers and an operator (+, -, *, /) seperated by a space: ";
	cin >> num1 >> num2 >> operation;

	cout << num1 << " " << operation << " " << num2;

	switch (operation) {
	case '-':
		cout << " = " << num1 - num2 << endl;
		break;
	case '+':
		cout << " = " << num1 + num2 << endl;
		break;
	case '*':
		cout << " = " << num1 * num2 << endl;
		break;
	case '/':
		cout << " = " << num1 / num2 << endl;
		break;
	default:
		cout << " = unable to regconize operator" << endl;
	}
	return 0;
}