#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	//�� �ܰ�� �ö󰥶����� 
	// �� ���� �� ���� ��������
	// 2�� �������� 1�� ������ ��ŭ�� ����
	int sum = 1 + pow(2, n);
	cout << sum * sum;
}