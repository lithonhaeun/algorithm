#include<iostream>
#include<string>
using namespace std;

struct node {
	int data;
	node* next;
};

class single {
private:
	int N;
	node* head;
	node* tail;
public:
	single() :N{ 0 }, head{ NULL }, tail{ NULL } {	}
	int size() { return N; }
	void insert(int x) {
		node* newnode = new node;
		newnode->data = x;
		if (N == 0) {
			head = tail = newnode;
		}
		else if(N==1) {
			tail = newnode;
			head->next = tail;
		}
		else {
			tail->next = newnode;
			tail = newnode;
		}
		N++;
	}
	void pop(int idx) {
		node* old = head;
		if (idx == 0) {
			if (N == 1) {
				cout << old->data;
				delete old;
				head = tail = NULL;
				
				N--;
				return;
			}
			else {
				cout << head->data;
				head= head->next;
				delete old;
				N--; return;
			}
		}
		for (int i = 0; i < idx-1; i++) {
			if (old == tail)
				old = head;
			else
				old = old->next;
		}
		node* erase = old;
		old = old->next;
		cout << old->data;
		erase->next = old->next;
		N--;
		delete old;
	}
};

int main() {
	int N; cin >> N;
	single arr;
	int e;

	for (int i = 0; i < N; i++) {
		arr.insert(i + 1);
	}
	cout << "<";
	cin >> e;
	e--;
	int plus = e;
	for (int i = 0; i < N-1; i++) {
		arr.pop(e);
		e += (plus);
		e %=arr.size();
		cout << ", ";
	}
	arr.pop(0);
	cout << ">";
}