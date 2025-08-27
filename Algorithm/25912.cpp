#include<iostream>
#include<set>
using namespace std;

set<string> people;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	string name;
	int count=0;


	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> name;
		if (name == "ENTER")
		{
			count += people.size();
			people.clear();
		}
		else {
			people.insert(name);
		}
	}
	count += people.size();
	cout << count;
}