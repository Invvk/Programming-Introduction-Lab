/*
	Exercise 3: write a C++ program that accomplish the following functions:
	1. Write a function called calulateAverage that takes the sum of marks as double,
	   their number as integer and returns the average of marks.
	2. Write a function getGrade that takes the mark as double and return:
	   * A: 90 <= mark <= 100
	   * B: 80 <= mark <= 90
	   * C: 70 <= mark <= 80
	   * D: 60 <= mark <= 70
	   * E: 50 <= mark <= 60
	   * F: otherwise
	   using switch statement
	3. Write a function getResult that takes the average of marks as double and return 'P' if the
	   average is greater than 50 and 'F' otherwise
	4. Write a function called printResult that takes the average of marks as double and outputs the
	   statment 'Congratulations!! You Passed!!' if the results is PASS, and the statement 'Sorry!! You Failed!!'
	   if the result is fail
	5. implement the main() function as follows:
	   * Input the unspecified number of marks for a student
	     * use negative value to exit
	   * Output the grade for each mark
	   * Output th average of the marks of the student

	then output the final result of the student
*/

#include <iostream>

using namespace std;

int calulateAverage(double marks, int number);
char getGrade(double mark);
char getResult(double average);
void printResult(double average);

int main() {
	int number, counter = 0, sum = 0;
	cout << "Enter the marks of the student (type negative number to terminate): ";
	cin >> number;
	while (number > 0) {
		cout << getGrade(number) << endl;
		sum += number;
		counter++;
		cin >> number;
	}
	double average = calulateAverage(sum, counter);
	cout << "Average is: " << average << endl;
	printResult(average);
	return 0;
}

void printResult(double average) {
	char result = getResult(average);
	if (result == 'P')
		cout << "Congratulations!! You Passed!!" << endl;
	else
		cout << "Sorry!! You Failed!!" << endl;
}

char getResult(double average) {
	if (average > 50)
		return 'P';
	return 'F';
}

char getGrade(double mark) {
	int calc = mark / 10;
	switch (calc) {
	case 10:
	case 9:
		return 'A';
	case 8:
		return 'B';
	case 7:
		return 'C';
	case 6:
		return 'D';
	case 5:
		return 'E';
	default:
		return 'F';
	}
	return 'F';
}

int calulateAverage(double marks, int number) {
	return marks / number;
}