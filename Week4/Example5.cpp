// Example 5: What does the following program prints ?

// Solve:
// in the example provided by uni the code was incorrect. I fixed it to match this exact output
// 
// Output:
// 1   2
// 2   4   6
// 3   6   9  12
// 4   8  12  16  20
// 5  10  15  20  25  30
// 6  12  18  24  30  36  42
// 7  14  21  28  35  42  49  56
// 8  16  24  32  40  48  56  64  72
// 9  18  27  36  45  54  63  72  81  90
// 10  20  30  40  50  60  70  80  90 100 110
// 11  22  33  44  55  66  77  88  99 110 121 132
// 12  24  36  48  60  72  84  96 108 120 132 144 156

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	for (int r = 1; r <= 12; r++) {
		for (int c = 1; c <= r + 1; c++)
			cout << setw(4) << r * c;
		cout << endl;
	}
	return 0;
}