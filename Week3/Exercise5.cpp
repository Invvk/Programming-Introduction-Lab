// Exercise 5: Write a C++ program that asks the user to enter three integers and find
// 1. the maximum among them
// 2. the minimum among them

// Solve:
// I wasn't sure that using <algorithm>, std::min, and std::max is allowed
// in this part, we haven't reached while and for loops so I couldn't use that too
// this is the best solution I could come up with that works
#include <iostream>

using namespace std;

int main() {
	int num1, num2, num3;
	cout << "enter 3 numbers seperated by space: ";
	cin >> num1 >> num2 >> num3;

	int max = num1;
	int min = num1;

	if (max > num2)
		max = num2;
	
	if (max > num3)
		max = num3;

	if (min > num2)
		min = num2;

	if (min > num3)
		min = num3;

	cout << "max is: " << max << endl;
	cout << "min is: " << min << endl;

	return 0;
}