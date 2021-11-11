// Exercise 4: Write a C++ program that reads the marks of N students. The program should display
// 1. Wether each student "PASS" or "FAILED"
// 2. the number of passed students and the number of failed students
// 3. the average
// 4. the minimum mark
// 5. the maximum mark

// Solve:

#include <iostream>

using namespace std;

int main() {
	int N, number, counter = 0, sum = 0, failed = 0, passed = 0, min = 100, max = 0;

	cout << "Enter number of students: ";
	cin >> N;

	cout << "Enter " << N << " marks seperated by space: ";

	for (int i = 1; i <= N; i++) {
		cin >> number;

		if (min > number)
			min = number;

		if (max < number)
			max = number;

		if (number >= 50) {
			passed++;
			cout << "PASS" << endl;
		}
		else {
			failed++;
			cout << "FAIL" << endl;
		}
		sum += number;
		counter++;
	}

	cout << "Number of students that passed = " << passed << endl;
	cout << "Number of students that failed = " << failed << endl;
	cout << "Average mark = " << sum / counter << endl;
	cout << "minimum mark = " << min << endl;
	cout << "maximum mark = " << max << endl;
	return 0;
}