#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector <int> arr(26,0);
	string word;
	char maxword;
	cin >> word;
	
	for(char c:word) {
		word = toupper(c);
		arr[c - 'A']++;
	}
	int max = *max_element(arr.begin(), arr.end());
	int max_count = count(arr.begin(), arr.end(), max);

	if (max_count > 1) {
		cout << "?";
	}

	else{
		for (int i = 0; i < 26; i++) {
			if (arr[i] == max)
			{
				maxword = i + 'A';
				break;
			}
		}
		cout << maxword;
	}
}
