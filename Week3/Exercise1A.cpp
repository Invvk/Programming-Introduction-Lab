// Exercise 1 A: Write a C++ program that asks the user to enter student mark, prints "PASS" if the mark
// is greater than or equal to 50, otherwise it prints "FALIED! you must take the course again"

// Solve:
#include <iostream>

using namespace std;

int main() {
	int mark;
	cout << "Enter student's mark: ";
	cin >> mark;

	if (mark >= 50)
		cout << "PASS";
	else
		cout << "FAILED! you must take the course again";
	return 0;
}
