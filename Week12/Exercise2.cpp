/*
	Exercise 2: Create a program the reads the salary of 10 worker then:
	 * create a function that reads the gender of the workers
	 * create a function that finds the maximum salary
	 * create a function that calculates the average of all salaries then print it
	 * create a function that find the gender for the worker with the minimum salary 
	 * create a function that finds the gender of the first salary that is < 500
*/ 

#include <iostream>

using namespace std;

void readGenders(char gender[], int size);
int calculateAverage(int salaries[], int size);
char getGenderWithLowestSalary(int salaries[], char genders[], int size);
char getFirstGenderLowerThan500(int salaries[], char genders[], int size);
int max(int salaries[], int size);

int main() {
	const int size = 10;
	int salaries[size];
	char genders[size];

	cout << "Enter salaries for the workers in order (10 salaries):";
	for (int i = 0; i < size; i++) {
		cin >> salaries[i];
	}

	readGenders(genders, size);
	cout << "Maximum salary: " << max(salaries, size) << "$" << endl;
	cout << "Average salary: " << calculateAverage(salaries, size) << endl;
	cout << "gender with the lowest salary is " << getGenderWithLowestSalary(salaries, genders, size) << endl;
	cout << "first gender with salary lower than 500 is " << getFirstGenderLowerThan500(salaries, genders, size) << endl;
	return 0;
}


void readGenders(char gender[], int size) {
	cout << "Enter genders for the workers in order (m/f) (10 workers): ";
	for (int i = 0; i < size; i++) {
		cin >> gender[i];
	}
}
int calculateAverage(int salaries[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += salaries[i];

	return sum / size;
}
char getGenderWithLowestSalary(int salaries[], char genders[], int size) {
	int index = 0;
	for (int i = 0; i < size; i++) {
		if (salaries[index] > salaries[i])
			index = i;
	}
	return genders[index];
}
char getFirstGenderLowerThan500(int salaries[], char genders[], int size) {
	for (int i = 0; i < size; i++) {
		if (salaries[i] < 500)
			return genders[i];
	}
	return genders[0];
}

int max(int salaries[], int size) {
	int index = 0;
	for (int i = 0; i < size; i++) {
		if (salaries[index] < salaries[i])
			index = i;
	}
	return salaries[index];
}