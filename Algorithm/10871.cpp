#include <iostream>
using namespace std;

int main() {
	//cin�� cout�� �����ư��� ������ ������ָ� ����
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	int X;
	int n;
	cin >> N >> X;
	for (int i = 0; i < N; i++) {
		cin >> n;
		if (n < X)
			cout << n<<" ";
	}
}