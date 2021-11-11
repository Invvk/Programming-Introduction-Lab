/*
	Exercise 1: Write a C++ program that declares an array of size 5, the program will ask
	the user to input the marks, and then find their average, number of passed students and the
	maximum mark. complete average, maximum and passCounter functions

	#1 to conside that the student pass the mark has to be greater than or equals to 50

	after you print the above, complete the setResult method and then fill the array with 'P' 
	if the student passed, 'F' otherwise (check #1 to find out wether the student passed or not)

	finally print the result array 'The result of student: '
*/

#include <iostream>

using namespace std;

void setResult(char result[], int marks[], int size);
int average(int marks[], int size);
int maximum(int marks[], int size);
int passCounter(int marks[], int size);

int main() {
	const int size = 5;

	int marks[size];
	char result[size];

	cout << "Enter 5 numbers seperated by space: ";
	for (int i = 0; i < size; i++) {
		cin >> marks[i];
	}

	cout << "Average is = " << average(marks, size) << endl;
	cout << "Maximum is = " << maximum(marks, size) << endl;
	cout << "Number of pass student is = " << passCounter(marks, size) << endl;

	setResult(result, marks, size);
	for (int i = 0; i < size; i++) {
		cout << "The result of student: " << result[i] << endl;
	}
}

int average(int marks[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += marks[i];
	}
	return sum / size;
}
int maximum(int marks[], int size) {
	int index = 0;
	for (int i = 0; i < size; i++) {
		if (marks[i] > marks[index])
			index = i;
	}
	return marks[index];
}

int passCounter(int marks[], int size) {
	int counter = 0;
	for (int i = 0; i < size; i++) {
		if (marks[i] >= 50)
			counter++;
	}
	return counter;
}

void setResult(char result[], int marks[], int size) {
	for (int i = 0; i < size; i++) {
		int mark = marks[i];
		if (mark >= 50)
			result[i] = 'P';
		else
			result[i] = 'F';
	}
}