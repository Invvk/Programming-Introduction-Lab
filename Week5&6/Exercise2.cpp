// Exercise 2: Write a C++ program that prints the following line of asterisks
// **********
// Using:
// 1. while loop
// 2. for loop

// Solve:

#include <iostream>

using namespace std;

int main() {

	// 1. while loop solution
	int i = 1;
	while (i <= 10) {
		cout << "*";
		i++;
	}

	cout << endl;

	// 2. for loop solution
	for (int x = 0; x < 10; x++) {
		cout << "*";
	}
	cout << endl;

	return 0;
}