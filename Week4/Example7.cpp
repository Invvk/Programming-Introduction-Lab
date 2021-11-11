// Example 7: What does the following program print?

// Solve:
// the uni code is correct this time. but I used my own modification this time.
// 
// output
//# #
//# # #
//# # # #
//# # # # #
//# # # # # #
//# # # # # # #
//# # # # # # # #
//# # # # # # # # #
//# # # # # # # # # #
//# # # # # # # # # # #
//# # # # # # # # # # # #
//# # # # # # # # # # # # #
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	for (int r = 1; r <= 12; r++) {
		for (int c = 1; c <= r + 1; c++) {
			cout << setw(2) << "#";
		}
		cout << endl;
	}
	return 0;
}