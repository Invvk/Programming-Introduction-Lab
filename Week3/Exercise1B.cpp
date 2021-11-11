// Exercise 1 B: if the student pass, update the program in (Exercise 1 A) to print the grade as follows:
// 1. "A" if the mark was between (90-100)
// 2. "B" if the mark was between (80-90)
// 3. "C" if the mark was between (70-80)
// 4. "D" if the mark was between (60-70)
// 5. "E" if the mark was between (50-60)
// using nested if-else

// Solve:
#include <iostream>

using namespace std;

int main() {
	int mark;
	cout << "Enter student's mark: ";
	cin >> mark;

	if (mark >= 50) {
		if (mark >= 90 && mark <= 100)
			cout << "A" << endl;
		else if (mark >= 80 && mark <= 90)
			cout << "B" << endl;
		else if (mark >= 70 && mark <= 80)
			cout << "C" << endl;
		else if (mark >= 60 && mark <= 70)
			cout << "D" << endl;
		else
			cout << "E" << endl;
	} else
		cout << "FAILED! you must take the course again";
	return 0;
}