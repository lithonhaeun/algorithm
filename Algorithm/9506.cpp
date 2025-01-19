#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

//����� ����� ���͸� �����ϴ� �Լ�
//�������� ������ī�� -1�� �����
vector<int> calculate(int n) {
	vector<int> v;
	v.push_back(n);
	for (int i = 1; i <= n; i++) {
		if ((n % i == 0)&& n != i)
			v.push_back(i);
	}
	//������ �˻�
	int sum = 0;
	for (int i = 1; i < v.size(); i++) {
		sum += v[i];
	}
	if (sum == n)
		v.push_back(-1);
	return v;
}

int main() {
	int n;
	cin >> n;
	vector<vector<int>> arr;
	while (n != -1) {
		arr.push_back(calculate(n));
		cin >> n;
	}

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i][0];
		if (arr[i][arr[i].size() - 1] == -1)
		{
			cout << " = ";
			for (int j = 1; j < arr[i].size()-2; j++) {
				cout << arr[i][j] << " + ";
			}
			cout << arr[i][arr[i].size() - 2];
			cout << endl;
		}
		else
			cout << " is NOT perfect." << endl;
	}
}