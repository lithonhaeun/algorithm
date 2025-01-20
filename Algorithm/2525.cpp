#include <iostream>
using namespace std;

int main() {
	int hour, minute;
	cin >> hour >> minute;
	int take;
	cin >> take;
	minute += take;

	while (minute >= 60) {
		minute -= 60;
		hour++;
	}
	while(hour>=24) {
		hour -= 24;
	}
	cout << hour << " " << minute; 
}