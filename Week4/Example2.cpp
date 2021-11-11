// Example 2: write a program to determine the sum of the first n positve numbers

// Solve:

#include <iostream>

using namespace std;

int main() {
	int counter, sum, N;

	cout << "Line: enter the number of positive integers to be added: ";
	cin >> N;
	sum = 0;
	cout << endl;
	for (counter = 1; counter <= N; counter++) {
		sum = sum + counter;
	}
	cout << "Line 7: sum of the first " << N << " positive integers is " << sum << endl;
	return 0;
}