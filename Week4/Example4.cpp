// Example 4: Write a program: Sentinel-Controlled loop
// suppose you want to read some positive integers and average them, but you do not have preset number
// of data items in mind. suppose the number -999 marks the end of the data.

// example run:
// Enter integers ending with -999
// 9 0 12 3 4 5 6 6 -999
// The sum of the 8 numbers is 45
// The average is 5

// Solve:

#include <iostream>

using namespace std;

const int SENTINEL = -999;

int main() {
	int number, sum = 0, counter = 0;
	cout << "Enter integers ending with " << SENTINEL << endl;
	cin >> number;
	while (number != SENTINEL) {
		sum = sum + number;
		counter++;
		cin >> number;
	}
	cout << "The sum of the " << counter << " numbers is " << sum << endl;
	if (counter != 0)
		cout << "The average is " << sum / counter << endl;
	else
		cout << "No input." << endl;
	return 0;
}