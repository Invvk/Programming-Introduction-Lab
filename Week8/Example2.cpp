// Example 2: Program that prints a triangle of stars

#include <iostream>

using namespace std;

void printStars(int blanks, int starsInLine);

int main() {
	int noOflines, counter, noOfBlanks = 30;
	cout << "Enter the number of star lines (1 to 20): ";
	cin >> noOflines;
	while (noOflines < 0 || noOflines > 20) {
		cout << "Number of star lines should be between 1 and 20" << endl;
		cout << "Enter the number of star lines (1 to 20): ";
		cin >> noOflines;
	}
	cout << endl << endl;
	for (counter = 1; counter <= noOflines; counter++) {
		printStars(noOfBlanks, counter);
		noOfBlanks--;
	}
	return 0;
}

void printStars(int blanks, int starsInLine) {
	int count;
	for (count = 1; count <= blanks; count++)
		cout << " ";
	for (count = 1; count <= starsInLine; count++)
		cout << "*";
	cout << endl;
}