#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	double n;
	cin >> n;

	int bang = 2;
	int ring=1; //한바퀴 돌때 방의 갯수;
	if (n == 1)
		cout << 1;
	else {
		while (n >=bang) {
			//한 바퀴당 방의 개수는 6의 배수이다.
			bang += 6 * ring;
			ring++;
		}
		cout << ring;
	}
}