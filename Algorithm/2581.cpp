#include <iostream>

using namespace std;

bool isFirst;
// bool�� �ʱ�ȭ���� �ʰ� �������� ������ ���, ������ ��� false�� ���� ��
// int ���� �ʱ�ȭ���� �ʰ� �������� ������ ���, -1�̶�� ������ ��

bool isDecimal(int num) { // i�� �Ҽ����� �ƴ��� 
	for (int i = 2; i < num; i++)  // �Ҽ��� ã���� 2���� num���� ��ȸ 1��
		if (num % i == 0)
			return false; // 2���� num - 1���� �� �߿��� ���������� ���� ������ �Ҽ��� �ƴմϴ�!
	return true;
}

// ���� ������ ���� -> �ּ����� ����ȭ -> �ڵ�� ����
// ��� ��������? -> �������� ���� �־�? �׷� �迭. �̷� ������ ������ ������� �ǹ����°ž�
// ������ �˰����� ���ؾ� �ϴ� ��, �����Ϳ� ���� �ʿ䰡 ����.
// ���͸� �ȽἭ �޸� ������ �� ����߾�
// �ð������� �ٽ� ��ȸ�� ���� ������ �� ��������

int main() {
	int begin, end;
	cin >> begin >> end;
	int sum{ 0 }, min;

	for (int i = begin; i <= end; i++) {
		if (isDecimal(i)) {// i�� �Ҽ����� �ƴ��� 
			// sum���ٰ� ���������
			// ��� ù��°�� ã�� ��� �� ���� min�� �����ؾߵ�

			sum += i;
			if (!isFirst) {// ù��°���� �ƴ���, �񱳿��꺸�� NOT������ �� ����
				min = i;
				isFirst = true;
			}
		}
	}

	if (sum == 0)
		cout << -1;
	else {
		cout << sum << "\n" << min;
	}
}

// ������ Ư���� ���� ������ �迭, �ڿ� ���Ұ� ������ �迭�� ���� �Ҵ���

// 1, 2, 3, 4 �̹� ���̰� 4�� �����Ǿ� �ִ� �迭
// ���̰� �� ����, �� 8�� ���ο� �迭 �ϳ� ���� 0��°���� 3��°���� 1234 ������ ���� �߰��� �������� ��Ҹ� 4��° ĭ�� �־�
// 1,2,4,8
// 1, 10000, �Ҽ��� 500
// 1 2 4 8 16 32 64 128 256, 512

//#include <iostream>
//#include<string>
//#include<cmath>
//#include<vector>
//using namespace std;
//
////�Ҽ��� ã�� ���Ϳ� �־��ִ� �Լ�
//void find(vector<int>& v, int num) {
//	v.push_back(num);
//	for (int i = 2; i < num; i++) { // �Ҽ��� ã���� 2���� num���� ��ȸ 1��
//		if (num % i == 0)
//		{
//			v.pop_back();
//			break;
//		}
//	}
//}
//
//int main() {
//	int begin, end;
//	cin >> begin >> end;
//	vector<int> v;
//	for (int i = begin; i <= end; i++) {
//		if (i != 1)
//			find(v, i);
//	} // (begin���� end���� ��ȸ 1��) * (�Ҽ��� ã���� 2���� num���� ��ȸ 1��)
//	int sum = 0;
//	if (v.size() == 0)
//		cout << -1 << endl;
//
//	else
//	{
//		for (int i = 0; i < v.size(); i++) // begin���� end���� �ִ� �Ҽ��� ��ȸ 1��
//		{
//			sum += v[i];
//		}
//		cout << sum << endl << v[0];
//	}
//}