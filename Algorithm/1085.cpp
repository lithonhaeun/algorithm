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

	//x�࿡�� �ּ� �Ÿ� ���ϱ�
	//y��� ���ؼ� �ּҰŸ� ���ϱ�
	if ((w - x) > x)
		length = x;
	if (length > y)
		length = y;
	if (length > h - y)
		length = h - y;
	cout << length;
}