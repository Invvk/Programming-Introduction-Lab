// Exercise 1: write a C++ program called measure that contains the following two functions:
/*
	This function converts from feet to meters
	double footToMeter(double foot)

	This function converts from meters to feet
	double meterToFoot(double meter)

	The formula for the conversion is:
	meter = 0.305 * foot
*/

#include <iostream>

using namespace std;

double footToMeter(double foot);
double meterToFoot(double meter);

int main() {
	double foot;
	double meter;

	cout << "Enter foot to convert it to meter: ";
	cin >> foot;

	cout << "Enter meters to convert it to foot: ";
	cin >> meter;

	cout << foot << " Foot to meter = " << footToMeter(foot) << "m" << endl;
	cout << meter << " meter to foot = " << meterToFoot(meter) << "ft" << endl;
	return 0;
}

double footToMeter(double foot) {
	return 0.305 * foot;
}
double meterToFoot(double meter) {
	return meter / 0.305;
}