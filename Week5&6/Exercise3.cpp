// Exercise 3: Write a C++ program that reads the marks for any number of students and finds an average

// Solve:

#include <iostream>

using namespace std;

int main() {

	int number, counter = 0, sum = 0;
	cout << "enter student's mark (type any letter to stop) : ";
	while (cin >> number) {
		sum = sum + number;
		counter++;
	}

	if (counter != 0)
		cout << "Average is = " << sum / counter << endl;
	else
		cout << "No input." << endl;

	return 0;
}