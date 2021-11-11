// Example 1: Write a program that determines the count of odd and even numbers for N positive numbers.

// Sove:

#include <iostream>

using namespace std;

const int N = 20;

int main() {
	int counter, number;
	int zeros = 0, odds = 0, evens = 0;

	cout << "Please enter " << N << " integers, " << "positive, negatives or zeros." << endl;
	for (counter = 1; counter <= N; counter++) {
		cin >> number;
		cout << number << endl;
		switch (number % 2) {
		case 0:
			evens++;
			if (number == 0)
				zeros++;
			break;
		case 1:
		case -1:
			odds++;
		}
	}
	cout << endl;
	cout << "There are " << evens << " evens, which includes " << zeros << " zeros." << endl;
	cout << "The number of odd number is: " << odds;
	return 0;
}