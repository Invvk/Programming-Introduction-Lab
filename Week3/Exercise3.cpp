// Exercise 3: Write a C++ program that asks the user to enter employee basic salary, and then
// it calculates the net salary according to the formula: net_salary = basic_salary - tax * basic_salary
// assume that:
// 1. tax equals to .16 if the basic salary is greater than 1000
// 2. tax equals to .10 if the basic salary is between 500 and 1000
// 3. otherwise tax equals .08

// Solve:
#include <iostream>

using namespace std;

int main() {
	double basic_salary;
	cout << "Enter the employee basic salary: ";
	cin >> basic_salary;

	double tax;
	if (basic_salary > 1000)
		tax = .16;
	else if (basic_salary >= 500 && basic_salary <= 1000)
		tax = .1;
	else
		tax = .08;

	double calculate = basic_salary - (tax * basic_salary);
	cout << "Net Salary = " << calculate << endl;
	return 0;
}