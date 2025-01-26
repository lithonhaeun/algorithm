#include <iostream>
using namespace std;

int main() {
	//cin과 cout가 번갈아가며 나오니 사용해주면 좋음
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