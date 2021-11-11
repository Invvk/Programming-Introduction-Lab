// Exercise 9: Write a C++ program that asks the user to enter N integers and find the minimum among them.

// Solve:

#include <iostream>

using namespace std;

int main() {
	int N, number, min = 0, counter = 0;

	cout << "enter the amount of numbers: ";
	cin >> N;

	cout << "enter the numbers: ";

	for (int i = 0; i < N; i++) {
		cin >> number;

		if (counter == 0) {
			min = number;
			counter++;
			continue;
		}

		if (min > number)
			min = number;
		counter++;
	}
	cout << "min " << min << endl;
	return 0;
}