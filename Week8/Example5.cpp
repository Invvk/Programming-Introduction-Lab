// Example 5: This program reads a course score and prints the associated coruse grade.

#include <iostream>

using namespace std;

void getScore(int& score);
void printGrade(int score);

int main() {
	int score;
	cout << "Based on the course score, this program computes the course grade" << endl;
	getScore(score);
	printGrade(score);
	return 0;
}


void getScore(int& score) {
	cout << "Enter the course score: ";
	cin >> score;
	cout << endl;
}

void printGrade(int score) {
	cout << "Your grade for this score is: ";
	if (score >= 90)
		cout << "A" << endl;
	else if (score >= 80)
		cout << "B" << endl;
	else if (score >= 70)
		cout << "C" << endl;
	else if (score >= 60)
		cout << "D" << endl;
	else
		cout << "F" << endl;
}
