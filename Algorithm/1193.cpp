#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	int n;
	int layer=1;
	int num=1;
	cin >> n;

	//�и��� ���� layer,
	//�밢�� ĭ���� ������ num
	while (n > num) {
		layer++;
		num += layer;
	}

	int a,b;
	a = layer;
	b = 1;
	
	//�и�� ������� ���
	//�и𿡼� �밢������ �󸶳� ������ ����Ѵ�
	for (int i = 0; i<num-n; i++) {
		a--;
		b++;
	}

	if(layer%2==0)
		cout << a << "/" << b;
	else
		cout << b << "/" << a;
}