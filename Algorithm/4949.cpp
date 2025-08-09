#include<iostream>
#include<string>
using namespace std;

class stack {
private:
	int size;
	char arr[101];
public:
	stack() :size{ 0 }, arr{ NULL } {}
	void push(char a) {
		arr[size++] = a;
	}
	void pop() {
		size--;
	}
	char rear() { return arr[size - 1]; }
	bool correctsentence() { return size == 0; }
	void print() {
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << "start\n";
	}
	void clear() { size = 0; }
};

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	string a;
	getline(cin, a);

	int idx = 0;
	stack sentence;

	while (a.size() != 1) {
		while (a[idx] != '.') {
			if (sentence.correctsentence() && (a[idx] == ')' || a[idx] == ']'))
			{
				sentence.push('k');
				break;
			}
			if (a[idx] == ')' && sentence.rear() == '(')
				sentence.pop();

			else if (a[idx] == ']' && sentence.rear() == '[')
				sentence.pop();
			else if (a[idx] == ']' || a[idx] == ')')
				sentence.push(a[idx]);
			else if (a[idx] == '[' || a[idx] == '(')
				sentence.push(a[idx]);
			idx++;
		}
		cout << (sentence.correctsentence() ? "yes" : "no") << "\n";
		getline(cin, a);
		
		sentence.clear();
		idx = 0;
	}
}