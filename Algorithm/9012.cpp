#include<iostream>
#include<string>
using namespace std;

class stack {
private:
	char arr[50];
	int rear;
public:
	stack():arr{NULL},rear{0}{}
	void push(char i) {
		if (i == '(')
				arr[rear++] = i;
		else if (arr[rear - 1]=='(')
				rear--;
		else {
			arr[rear++] = i;
		}
	}
	bool correct() {
		if (arr[0] == ')')
			return false;
		else if (rear != 0)
			return false;
		return true;
	}
};

int main() {
	int N; cin >> N;
	string line;
	for (int i = 0; i < N; i++) {
		stack v;
		cin >> line;
		for (int j = 0; j < line.size(); j++) {
			v.push(line[j]);
		}
		cout << (v.correct() ? "YES" : "NO") << "\n";
	}
}