#include <iostream>
#include <string>

using namespace std;

int main() {
	char word[16] = {NULL};
	int count = 0;
	int sumtime = 0;
	cin >> word;
	
	while (word[count] !='\0') {
		if (word[count] <'S')
			sumtime += (word[count] - 62) / 3+2;
		else if (word[count] < 'Z')
			sumtime += (word[count] - 63) / 3 + 2;
		else
			sumtime += (word[count] - 64) / 3 + 2;
		count++;
	}
	cout << sumtime;
}