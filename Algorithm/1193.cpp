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

	//분모의 수를 layer,
	//대각선 칸들의 개수는 num
	while (n > num) {
		layer++;
		num += layer;
	}

	int a,b;
	a = layer;
	b = 1;
	
	//분모로 계산점을 잡고
	//분모에서 대각선으로 얼마나 갈지를 계산한다
	for (int i = 0; i<num-n; i++) {
		a--;
		b++;
	}

	if(layer%2==0)
		cout << a << "/" << b;
	else
		cout << b << "/" << a;
}