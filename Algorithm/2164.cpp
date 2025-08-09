#include<string>
#include<iostream>
using namespace std;

struct node {
	int data;
	node* next;
	node* prev;
};

class Double {
private:
	int N;
	node* header;
	node* trailer;
public:
	Double():N{0},header{new node}, trailer{new node}{
		header->next = trailer;
		trailer->prev = header;
	}
	node* front() { return header->next; }
	void pop_front() {
		node* old = header->next;
		header->next = old->next;
		old->next->prev = header;
		delete old;
		N--;
	}
	void push_back(int x) {
		node* newnode = new node;
		newnode->data = x;

		node* old = trailer->prev;
		old->next = newnode;
		newnode->prev = old;
		newnode->next = trailer;
		trailer->prev = newnode;
		N++;
	}
	int size() { return N; }
	int datafront() { return header->next->data; }
};

int main() {


	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int N; cin >> N;
	Double arr;

	for (int i = 0; i < N; i++) {
		arr.push_back(i+1);
	}
	if (arr.size() == 1)
	{
		cout << arr.front()->data << "\n";
		return 0;
	}
	while (arr.size() != 2) {
		arr.pop_front();
		int frontnode = arr.datafront();
		arr.push_back(frontnode);
		arr.pop_front();
	}
	arr.pop_front();
	cout << arr.front()->data << "\n";
}