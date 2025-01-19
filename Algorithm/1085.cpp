#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

//
int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int length = w-x;

	//x축에서 최소 거리 구하기
	//y축과 비교해서 최소거리 구하기
	if ((w - x) > x)
		length = x;
	if (length > y)
		length = y;
	if (length > h - y)
		length = h - y;
	cout << length;
}