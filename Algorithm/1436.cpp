#include <iostream>
using namespace std;

bool end(int N) {
	int six = 0;
	while (N >= 1) {
		if (N % 10 == 6)
		{
			six++;
			if (six >= 3)
				return true;
		}
		else {
			six = 0;
		}
		N /= 10;
	}
	return false;
}

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N;
	int num = 0; //번째 수 세는 값
	int jongmal = 666;

	cin >> N;
	if (N >= 5000) {
		jongmal = 1466659;
		num = 4999;
	}
	for (int i = jongmal; i <= 2666799; i++) {
		if (end(i))
		{
			num++;
			if (num == N)
			{
				cout << i;
				break;
			}
		}
	}
}