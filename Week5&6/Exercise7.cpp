// Exercise 7: Write a C++ program that allows the user to enter two numbers and find the prime numbers
// in between


#include <iostream>

using namespace std;

int main() {

	int num1, num2;

	cout << "Enter two numbers seperated by a space: ";
	cin >> num1 >> num2;

	if (num1 > num2) {
		num1 = num1 + num2;
		num2 = num1 - num2;
		num1 = num1 - num2;
	}
	int flag = 0;
	while (num1 < num2) {
		flag = 0;
		for (int x = 2; x <= num1 / 2; ++x) {
			if (num1 % x == 0) {
				flag = 1;
				break;
			}
		}

		if (flag == 0)
			cout << num1 << " ";
		++num1;
	}

	return 0;
}