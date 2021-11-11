/*
	Example 1: a program to read five numbers, find their sum and print the numbers in reverse order.
*/

#include <iostream>

using namespace std;

int main() {
	int item[5];
	int sum = 0, counter;
	cout << "Enter five numbers: ";
	for (counter = 0; counter < 5; counter++) {
		cin >> item[counter];
		sum += item[counter];
	}
	cout << endl;
	cout << "The sum of the numbers is: " << sum << endl;
	cout << "The numbers in reverse order are: ";
	for (counter = 4; counter >= 0; counter--)
		cout << item[counter] << " ";
	cout << endl;
}