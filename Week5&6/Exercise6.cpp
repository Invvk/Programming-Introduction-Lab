// Exercise 6: Write a C++ program that asks the user to enter a number and check wether it is prime
// or not

// Solve

#include <iostream>

using namespace std;

int main() {
	int number;
	cout << "Enter a number: ";
	cin >> number;

	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			cout << number << " is not a prime number";
			return 0;
		}
	}
	cout << number << " is a prime number";
	return 0;
}