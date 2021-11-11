// Exercise 5: Write a C++ program that finds the sum of
// 1. all even numbers between 1 and 100 
// 2. all odd numbers between 1 and 100

// Solve:
#include <iostream>

using namespace std;

int main() {
	int odd_sum = 0, even_sum = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0)
			even_sum += i;
		else
			odd_sum += i;
	}
	cout << "even sum: " << even_sum << endl;
	cout << "odd sum: " << odd_sum << endl;
	return 0;
}