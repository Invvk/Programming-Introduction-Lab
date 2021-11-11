// Example 3: Write a program: Counter-Controlled loop
// suppose the input is 8 9 2 3 90 38  56 8 2 23 89 7 2
// and you eant ti add these numbers and find their average

// Solve:

#include <iostream>

using namespace std;

int main() {
	int limit, number, sum , counter;
	cout << "Enter the number of integers in the list: ";
	cin >> limit;
	cout << endl;

	sum = 0, counter = 0;
	cout << "Enter " << limit << " integers" << endl;
	while (counter < limit) {
		cin >> number;
		sum = sum + number;
		counter++;
	}
	cout << "The sum of the " << limit << " numbers = " << sum << endl;
	if (counter != 0)
		cout << "The average = " << sum / counter << endl;
	else
		cout << "No input." << endl;
	return 0;
}