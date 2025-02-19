#include <iostream>
#include<string>
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);


	int arr[26] = { 0 };
	char word;
	char maxword;
	int max = 0;

	while (cin >> word) {
		word = toupper(word);
		arr[word - 'A']++;
	}
	//count함수와
	//max_element 함수 알아오기
	for (int i = 0; i < 26; i++) {

		if (max < arr[i])
		{
			max = arr[i];
			maxword = i + 'A';
		}

		else if (max == arr[i])
		{
			maxword = '?';
		}

	}

	cout << maxword;
}