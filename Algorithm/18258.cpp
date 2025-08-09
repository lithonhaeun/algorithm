#include<iostream>
#include<string>
using namespace std;

struct node {
	int data;
	node* next;
	node* prev;
};

class Queue {
private:
	int N;
	node* head;
	node* tail;
public:
	Queue():N{0}, head{new node},tail{new node}{
		head->next = tail;
		tail->prev = head;
	}
	void push(int x) {
		node* newnode = new node;
		newnode->data = x;
		
		node* old = tail->prev;
		old->next = newnode;
		newnode->prev = old;
		tail->prev = newnode;
		newnode->next = tail;
		N++;
	}
	int size() { return N; }
	int empty() { return N == 0; }
	void front() {
		if (N == 0)
			cout << -1 << "\n";
		else
			cout << head->next->data << "\n";
	}
	void back() {
		if (N == 0)
			cout << -1 << "\n";
		else
			cout << tail->prev->data << "\n";
	}
	void pop() {
		if (N == 0)
		{
			cout << -1 << "\n";
			return;
		}
		node* old = head->next;
		cout << head->next->data;
		head->next = old->next;
		old->next->prev = head;
		N--;
		delete old;
		cout << "\n";
	}
};

int main() {

	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);


	int N; cin >> N;
	string menu;
	int x;
	Queue arr;

	for (int i = 0; i < N; i++) {
		cin >> menu;
		if (menu == "push") {
			cin >> x;
			arr.push(x);
		}
		else if (menu == "front")
			arr.front();
		else if (menu == "back")
			arr.back();
		else if (menu == "pop")
			arr.pop();
		else if (menu == "size")
			cout << arr.size() << "\n";
		else if (menu == "empty")
			cout << (arr.empty() ? 1 : 0) << "\n";
	}
}