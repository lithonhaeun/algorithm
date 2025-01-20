#include <iostream>
using namespace std;

int main() {
	int hour, minute;
	cin >> hour>> minute;

	if (minute >= 45)
		minute -= 45;
	else {
		if (hour > 0)
			hour--;
		else
			hour = 23;
		minute += 15;
	}
	cout << hour <<" " << minute;
}