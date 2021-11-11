// Exercise 1: Write a C++ program that prints all the number
// 1. from 1 - 10
// 2. from 10 - 1
// then calculates their total using:
// 1. while loop
// 2. for loop

// Solve:

#include <iostream>

using namespace std;

int main() {
	// global variable for seperate solutions
	int sum = 0;

	// 1. while loop solution:
	int i = 1;

	while (i <= 10) {
		cout << i++ << endl;
		sum = sum + i;
	}

	i = 10;
	while (i > 0) {
		cout << i-- << endl;
		sum = sum + i;
	}
	cout << "total: " << sum << endl;

	// 2. for loop solution:
	for (int i = 1; i <= 10; i++) {
		cout << i << endl;
		sum = sum + i;
	}

	for (int i = 10; i > 0; i--) {
		cout << i << endl;
		sum = sum + i;
	}
	cout << "total: " << sum << endl;
	return 0;
}