// Example 1: write a program that takes as input given length expressed in feet and inches 
// and convert and output the length in centimeters. centimeters per inch = 2.54, inches per foor = 12

#include <iostream>

using namespace std;

// constants, these are provided by default in the question
const double CENTIMETERS_PER_INCH = 2.54;
const int INCHES_PER_FOOT = 12;

int main() {

	// declaring variables
	int feet, inches;
	int totalInches;
	double centimeters;

	// cout to tell the user to input the numbers
	cout << "Enter two integers, one for feet and one for inches: ";

	// assigning the numbers to the variables
	cin >> feet >> inches;
	cout << endl;
	
	// calculating the total inches to convert it to centimeters
	totalInches = (INCHES_PER_FOOT * feet) + inches;
	cout << "The total number of inches = " << totalInches << endl;

	// converting inches to centimeters
	centimeters = CENTIMETERS_PER_INCH * totalInches;
	cout << "The total number of centimeters = " << centimeters << endl;

	return 0;
}