// Example 3: user defined functions. find the largest number of a set of 10 numbers

#include <iostream>

using namespace std;

double larger(double x, double y);

int main() {
	double num, max;
	int count;
	cout << "Enter 10 numbers: ";
	cin >> num;
	max = num;
	for (count = 1; count < 10; count++) {
		cin >> num;
		max = larger(max, num);
	}
	cout << "The largest number is = " << max << endl;
	return 0;
}

double larger(double x, double y) {
	if (x >= y) {
		return x;
	}
	return y;
}