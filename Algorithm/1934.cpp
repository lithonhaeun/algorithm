#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>
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
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B;
	int N;
	cin >> N;
	
	

	for (int k = 0; k < N; k++) {
		cin >> A >> B;
		int arr[45001] = { 0 };

		long long max = A * B;
		int min = gcd(A, B);
		
		cout << min;
		long long lcm = (1LL * A * B) / min;  		cout << lcm << "\n";
	}
}