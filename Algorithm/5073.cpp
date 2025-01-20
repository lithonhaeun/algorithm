#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

//max를 정하는 함수
bool findmax(int num[3]) {
	for (int i = 0; i < 3; i++) {
		if ((num[i] * 2) >= num[0] + num[1] + num[2])
			return false;
	}
	return true;
}

int main() {
	int num[3];
	cin >> num[0] >> num[1] >> num[2];


	while (num[0] != 0 || num[1] != 0 || num[2] != 0) {
		if (num[0] == num[1] && num[1] == num[2])
			cout << "Equilateral"<<endl;
		else if (findmax(num)) {
			if (num[0] == num[1] || num[1] == num[2] || num[0] == num[2])
				cout << "Isosceles"<<endl;
			else
				cout << "Scalene"<<endl;
		}
		else
			cout << "Invalid"<<endl;
		cin >> num[0] >> num[1] >> num[2];
	}
}