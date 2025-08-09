#include<iostream>
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int main() {
	int A, B,a ,b;
	cin >> A >> B>>a>>b;

	long long mom = 1LL*B * b;
	long long bro = 1LL*A * b + a * B;

	int min = gcd(mom, bro);
	
	cout << bro / min << " " << mom / min;
}