#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;


//�� ���� �־����� ������ ���簢���� ����� ���� 4��° ���� ���Ѵ�.
int main() {
	int x, y, x1, y1, x2, y2;
	cin >> x >> y >> x1 >> y1 >> x2 >> y2;

	if (x == x1)
	{
		cout << x2;
	}
	if (x == x2)
		cout << x1;
	if(x1==x2)
		cout << x;
	cout<< " ";


	if (y == y1)
		cout<< y2;
	if (y == y2)
		cout<< y1;
	if (y1 == y2)
		cout << y;

}