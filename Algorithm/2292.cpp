#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	double n;
	cin >> n;

	int bang = 2;
	int ring=1; //�ѹ��� ���� ���� ����;
	if (n == 1)
		cout << 1;
	else {
		while (n >=bang) {
			//�� ������ ���� ������ 6�� ����̴�.
			bang += 6 * ring;
			ring++;
		}
		cout << ring;
	}
}