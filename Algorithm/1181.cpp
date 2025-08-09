#include <iostream>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
	if (a.size() != b.size())
		return a.size() < b.length();
	else
		return a < b;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	string word[20001];
	string beforeword = "";
	int N;
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> word[i];
	}

	sort(word, word + N, compare);

	for (int i = 0; i < N; i++) {
		if (beforeword != word[i])
			cout << word[i] << "\n";
		beforeword= word[i];
	}
}