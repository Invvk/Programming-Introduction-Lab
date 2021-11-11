// Example 4: illustrating how a value parameter works.

#include <iostream>

using namespace std;

void funcValueParam(int num);

int main() {
	int num = 6;
	cout << "Before calling funcValueParam num = " << num << endl;
	funcValueParam(num);
	cout << "After calling funcValueParam num = " << num << endl;
	return 0;
}

void funcValueParam(int num) {
	cout << "In the function funcValueParam before changing num = " << num << endl;
	num = 15;
	cout << "In the function funcValueParam after changing num = " << num << endl;
}