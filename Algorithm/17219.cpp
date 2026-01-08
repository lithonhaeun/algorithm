#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

unordered_map<string, string> site;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string link, password;
	int line_num,find_num;
	cin >> line_num >> find_num;

	for (int i = 0; i < line_num; i++) {
		cin >> link >> password;
		site[link] = password;
	}

	for (int i = 0; i < find_num; i++) {
		cin >> link;
		cout << site[link] << "\n";
	}
}