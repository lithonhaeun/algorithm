#include <iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;


//도형의 모서리들을 가장자리로 밀었을때 nxn의 정사각형이 됨을 알수 있다.
//10의 9제곱까지라 int 가 아닌 unsigned int 로 해야함
int main() {
	unsigned int n;
	cin >> n;
	cout << n * 4;
}