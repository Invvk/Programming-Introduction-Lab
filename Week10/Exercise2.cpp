/*
	Exercise 2: Write a C++ program called area that contains the following function

	This function calculate the area of square
	double area (int lengh, int width);

	Write a test program to test the previous function

*/

#include <iostream>

using namespace std;

double area(int lenght, int width);

int main() {
	int length, width;

	cout << "Enter the length and the width of the sqaure separated by space: ";
	cin >> length >> width;

	cout << "Area is: " << area(length, width) << endl;
	return 0;
}

double area(int lenght, int width) {
	return (double) lenght * width;
}