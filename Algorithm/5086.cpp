#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	vector<string> v;

	//경우 구별하기
	while (a != 0 && b != 0) {
		if (b % a == 0)
			v.push_back("factor");
		else if (a % b == 0)
			v.push_back("multiple");
		else
			v.push_back("neither");
		cin >> a >> b;
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
}