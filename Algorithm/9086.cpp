#include <iostream>
#include<string>
using namespace std;

int main() {
	int n;
	string word;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> word;
		cout << word.front() << word.back()<<"\n";
	}
}