#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	int A, B, V;

	cin >> A >> B >> V;

	int day = 1;

	//�ݿø��� ����� ���� �����ϰ� �㿡 �ȹ̲������� ��츦 ����� �� �ִ�.
	day = ceil((double)(V - A) / (A - B)) + 1;
	cout << day;
}