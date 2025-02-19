#include <iostream>
#include<string>
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	string word;
	int count = 0;
	cin >> word;

	for (int i = 0; i < word.size(); i++) {
		count++;
		if (word[i] == 'c' && (word[i + 1] == '=' || word[i + 1] == '-'))
			i++;
		else if (word[i] == 'd') {
			if (word[i + 1] == '-')
				i++;
			else if (word[i + 1] == 'z' && word[i + 2] == '=')
				i += 2;
		}
		else if ((word[i] == 'n' || word[i] == 'l') && word[i + 1] == 'j')
			i++;
		else if ((word[i] == 's' || word[i] == 'z') && word[i + 1] == '=')
			i++;	
	}
	cout << count;
}