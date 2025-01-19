#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

// 변수명을 알파벳으로 짓지 말기
// 알고리즘을 풀때 문제를 한 1시간이 봐야하는 경우 있잖아
int main() {
	int n;
	cin >> n;
	int num, num1;
	int mm[2][2]; // 어떤 의미야? max min

	//1열의 [0]값은 x, [1]값은 y
	//2번째 배열의 [0]은 max 값, [1]은 min값을 넣는다.
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