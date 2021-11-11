// Write a C++ program that accepts an angel, in degrees, and displays the type of an angel
// corresponding to the degrees entered.
// (Hint: right angel = 90, acute angel < 90, obtuse angel > 90)

// Solve:

#include <iostream>

using namespace std;

int main() {
	// I used double because angel can be a decimal
	double angel;

	cout << "Enter the angel in degrees: ";
	cin >> angel;

	if (angel == 90.0)
		cout << "This is a right angel" << endl;
	else if (angel > 90.0)
		cout << "This is an obtuse angel" << endl;
	else
		cout << "This is an acute angel" << endl;
	return 0;
}