#include <iostream>
#include <algorithm>
#include<vector>

using namespace std;

struct person {
	int age;
	string name;
};

bool compare(const person& a, const person& b) {
		return a.age < b.age;
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int N; cin >> N;
	string name;
	int id;
	vector<person> mans;

	for (int i = 0; i < N; i++) {
		cin >> id >> name;
		mans.push_back({ id,name });
	}

	stable_sort(mans.begin(), mans.end(), compare);

	for (int i = 0; i < mans.size(); i++) {
		cout << mans[i].age << " " << mans[i].name << "\n";
	}
}