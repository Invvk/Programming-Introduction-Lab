// Example 5: The following program is designed to find the area of a rectangle,
// the are of a circle, or the volume of a cylinder. However, (a) the statments are in the incorrect order; 
// (b) the function calls are incorrect; (c) the logical expression in the while loop is incorrect; and (d)
// function definitions are incorrect. Rewrite the program so that it works correctly. Your program must 
// be properly indented. (Note that the program is menu driven and allows the user to run the program as long 
// as the user wishes)

#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.1419;
double rectangle(double l, double w);
double circle(double r);
double cylinder(double bR, double h);

int main() {
	double radius, height, length, width;
	int choice;
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "This program can calculate the area of a rectangle, the area of a circle, or volume of a cylinder." << endl;
	cout << "To run the program enter: " << endl;
	cout << "1. To find the area of rectangle." << endl;
	cout << "2. To find the area of circle." << endl;
	cout << "3. To find the volume of cylinder." << endl;
	cout << "-1. To terminate the program." << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	cout << endl;
	while (choice != -1) {
		switch (choice) {
		case 1:
			cout << "enter the length and the width of the rectangle: ";
			cin >> length >> width;
			cout << endl;
			cout << "Area of rectangle = " << rectangle(length, width) << endl;
			cout << endl;
			break;
		case 2:
			cout << "enter the radius of the circle: ";
			cin >> radius;
			cout << endl;
			cout << "Area of a circle = " << circle(radius) << endl;
			cout << endl;
			break;
		case 3:
			cout << "Enter the radius of the base and the height of the cylinder: ";
			cin >> radius >> height;
			cout << endl;
			cout << "Volume: " << cylinder(radius, height) << endl;
			cout << endl;
			break;
		default:
			cout << endl;
			cout << "Invalid choice!" << endl;
			cout << endl;
		}
		cout << "To run the program enter: " << endl;
		cout << "1. To find the area of rectangle." << endl;
		cout << "2. To find the area of circle." << endl;
		cout << "3. To find the volume of cylinder." << endl;
		cout << "-1. To terminate the program." << endl;
		cout << "Enter your choice: ";
		cin >> choice;
	}
}

double rectangle(double l, double w) {
	return l * w;
}

double circle(double r) {
	return PI * r * r;
}

double cylinder(double bR, double h) {
	return PI * bR * bR * h;
}
