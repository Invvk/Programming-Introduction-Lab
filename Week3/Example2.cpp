// Example 2: Suppose we want to create a program that takes a grade in numbers (percent) as x then
// it outputs the grade in letters (A, B, C ...)
// Consider the following: 
// x is the grade percent.
// 
// if:
// 1. x is bigger or equals to 90 then it will output 'A'
// 2. x is bigger or equals to 80 then it will output 'B'
// 3. x is bigger or equals to 70 then it will output 'C'
// 4. x is bigger or equals to 60 then it will output 'D'
// 5. if x is not the above then it will output 'F'

// Solve:
#include <iostream>

using namespace std;

int main() {
	int x;

	cout << "Enter the grade in percent: ";
	cin >> x;

	if (x >= 90)
		cout << "A" << endl;
	else if (x >= 80)
		cout << "B" << endl;
	else if (x >= 70)
		cout << "C" << endl;
	else if (x >= 60)
		cout << "D" << endl;
	else
		cout << "F" << endl;
	return 0;
}