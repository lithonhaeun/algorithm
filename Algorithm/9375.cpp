#include<iostream>
#include<unordered_map>
#include<vector>
#include<cmath>
using namespace std;


unordered_map<string, int>costum_check;
unordered_map<string, int>category_check;
vector<string> category;

int main() {
	int N, num; cin >> N;
	int total = 1;
	string cloth, thema;
	for (int i = 0; i < N; i++) {
		total = 1;
		cin >> num;
		for (int j = 0; j < num; j++) {
			cin >> cloth >> thema;
			if (costum_check[cloth] == 0) {
				if (category_check[thema] == 0)
				{
					category.push_back(thema);
				}
				category_check[thema]++;
			}
		}
		for (int j = 0; j < category.size(); j++) {
			total *= (category_check[category[j]] + 1);
		}

		cout << total - 1 << "\n";
		category.clear();
		category_check.clear();
		costum_check.clear();

	}
}