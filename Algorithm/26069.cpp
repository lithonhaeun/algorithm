#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

set<string> people;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	string name,name_1;
	bool met = false;


	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> name>>name_1;
		if (name == "ChongChong"||name_1 == "ChongChong")
		{
			met = true;
			people.insert(name);
			people.insert(name_1);
		}
		else if (met && people.count(name) || people.count(name_1)) {
			people.insert(name);
			people.insert(name_1);
		}
	}
	cout <<people.size();
}