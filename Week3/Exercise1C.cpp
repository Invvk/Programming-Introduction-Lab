// Exercise 1 C: Rewrite Exercise 1 B but instead of using nested if-else, use switch statement

// Solve:
// Obvisuoly, in switch statements it expects a constant expression, meaning we can't invoke something like
// 'mark >= 90' as a case in switch statment. the first thing that might come to mind is to put the numbers
// manually, like 
// case: 100
// case: 99
// case: 98
// etc....
// cout << "A" << endl;
// break;
// 
// although, it works but it is not a vaiable solution. it will take a lot of time to implement, also
// not to mention the readabilty and scalability is going to be a nightmare.
// 
// the solution I went with is using division because the grade is being saved as an integer
// I wouldn't have to worry about marks printing as decimals like 68 / 10 = 6.8 etc...
// it will always print a number without decimals, as showen in the solution
// something like 68/10 will print 6, 67/10 is also going to print 6..
// I think you can already see where is this going
#include <iostream>

using namespace std;

int main() {
	int mark;
	cout << "Enter student's mark: ";
	cin >> mark;

	if (mark >= 50) {
		switch (mark / 10) {
		case 10:
		case 9:
			cout << "A" << endl;
			break;
		case 8:
			cout << "B" << endl;
			break;
		case 7:
			cout << "C" << endl;
			break;
		case 6:
			cout << "D" << endl;
			break;
		default:
			cout << "E" << endl;
		}
	}
	else
		cout << "FAILED! you must take the course again";
	return 0;
}