#include <iostream>
using namespace std;

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int a, b, c, d, e, f;
	double x, y;

	cin >> a >> b >> c >> d >> e >> f;
	
	if (a == 0) {
		y = c / b;
		x = (f - e * y) / d;
	}
	else if (d == 0) {
		y = f / e;
		x = (c - b * y) / a;
	}
	else if (b == 0) {
		x = c / a;
		y = (f - d * x) / e;
	}
	else if (e == 0) {
		x = f / e;
		y = (c-a*x)/ b;
	}
	else
	{
		y = (c * d - a * f) / (b * d - a * e);
		x = (c - b * y) / a;
	}

	cout << x << " " << y;
}