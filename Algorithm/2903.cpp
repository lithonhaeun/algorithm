#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	//한 단계식 올라갈때마다 
	// 한 변의 점 개수 증가량은
	// 2의 제곱수가 1씩 증가한 만큼과 같다
	int sum = 1 + pow(2, n);
	cout << sum * sum;
}