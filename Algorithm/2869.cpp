#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	int A, B, V;

	cin >> A >> B >> V;

	int day = 1;

	//반올림을 해줘야 낮에 도착하고 밤에 안미끄러지는 경우를 계산할 수 있다.
	day = ceil((double)(V - A) / (A - B)) + 1;
	cout << day;
}