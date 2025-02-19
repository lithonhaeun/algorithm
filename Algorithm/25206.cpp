#include <iostream>
#include<string>
using namespace std;

int main() {
	double hacjum;//학점입니당
	string subject;
	string grade;
	int sum = 0;
	double hacjumXgrade = 0;

	for (int i = 0; i < 20; i++) {
		cin >> subject >> hacjum >> grade;
		if (grade == "P")
			continue;

		if (grade == "A+")
			hacjumXgrade += 4.5 * hacjum;
		else if (grade == "A0")
			hacjumXgrade += 4.0 * hacjum;
		else if (grade == "B+")
			hacjumXgrade += 3.5 * hacjum;
		else if (grade == "B0")
			hacjumXgrade += 3.0 * hacjum;
		else if (grade == "C+")
			hacjumXgrade += 2.5 * hacjum;
		else if (grade == "C0")
			hacjumXgrade += 2.0 * hacjum;
		else if (grade == "D+")
			hacjumXgrade += 1.5 * hacjum;
		else if (grade == "D0")
			hacjumXgrade += 1.0 * hacjum;

		sum += hacjum;
	}


	if (sum == 0)
		cout << 0.0;
	else
		cout << hacjumXgrade / sum;

}