#include <iostream>
using namespace std;

int main() {
	//cin.tie(NULL)�� sync_with_stdio(false)�� 
	//������� ����Ҷ� ����Ѵ�.
	//stream�� ����Ҷ�, c++�� c���� ����ȭ ������
	//����ȭ�� ������ ������ ���۸� ����ϱ� ������ ������� ��������.
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	long long T;
	int A, B;
	cin >> T;
	
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		cout << A + B << "\n";
	}
	
}