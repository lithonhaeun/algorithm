#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

// �������� ���ĺ����� ���� ����
// �˰����� Ǯ�� ������ �� 1�ð��� �����ϴ� ��� ���ݾ�
int main() {
	int n;
	cin >> n;
	int num, num1;
	int mm[2][2]; // � �ǹ̾�? max min

	//1���� [0]���� x, [1]���� y
	//2��° �迭�� [0]�� max ��, [1]�� min���� �ִ´�.
	cin >> mm[0][0] >> mm[1][0];
	mm[0][1] = mm[0][0];
	mm[1][1] = mm[1][0];
	for (int i = 0; i < n - 1; i++) {
		for(int j = 0;j<2;j++){
			cin >> num;
			if (mm[j][0] < num)
				mm[j][0] = num;
			else if (mm[j][1] > num)
				mm[j][1] = num;
		}
	}

	int area = (mm[0][0] - mm[0][1]) * (mm[1][0] - mm[1][1]);
	cout << area;
}