/*
	Exercise 3: Write a C++ program that contains two functions
	setData(int A[], int size) and getData(int A[], int size)

	* setData will ask the user to enter 5 numbers and then it will fill the array
	* getData will print the array values

	do this to 2 different arrays using only these 2 functions
*/

#include <iostream>

using namespace std;

void getData(int A[], int size);
void setData(int A[], int size);

int main() {
	const int size = 5;
	int array1[size], array2[size];
	setData(array1, size);
	getData(array1, size);

	cout << endl;

	setData(array2, size);
	getData(array2, size);
	return 0;
}

void getData(int A[], int size) {
	for (int i = 0; i < 5; i++)
		cout << A[i] << " ";
	cout << endl;
}
void setData(int A[], int size) {
	cout << "Enter 5 numbers: ";
	for (int i = 0; i < size; i++)
		cin >> A[i];
}