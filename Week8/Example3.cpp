// Example 3: Value and regerence parameters illustrating how two variables are swapped

#include <iostream>

using namespace std;

void swap(int& x, int& y);

int main() {
	int x1 = 10, y1 = 15;
	cout << "Before calling swap function: " << x1 << ", y: " << y1 << endl;
	swap(x1, y1);
	cout << "After calling swap function: " << x1 << ", y: " << y1 << endl;
	return 0;
}

void swap(int& x, int& y) {
	cout << "Before swapping, x: " << x << ", y: " << y << endl;
	x = x + y;
	y = x - y;
	x = x - y;
	cout << "After swapping, x: " << x << ", y: " << y << endl;
}