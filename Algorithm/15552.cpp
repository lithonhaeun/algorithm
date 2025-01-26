#include <iostream>
using namespace std;

int main() {
	//cin.tie(NULL)과 sync_with_stdio(false)은 
	//입출력이 빈번할때 사용한다.
	//stream을 사용할때, c++과 c각각 동기화 되지만
	//동기화를 끊으면 각각의 버퍼를 사용하기 때문에 입출력이 빨라진다.
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