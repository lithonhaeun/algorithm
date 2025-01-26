#include <iostream>
#include<string>
using namespace std;

int main() {
	string word;
	int arr[26] = { 0 };

	cin >> word;
	for (int i = 0; i < 26; i++) {
		arr[i] = -1;
	}
	for (int i = 0; i < word.size(); i++) {
		if ((arr[word[i] - 97]) < 0)
			arr[word[i] - 97] = i;
	}
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
}