#include<iostream>
#include<string>
using namespace std;

struct node {
	int data;
	node* next;
	node* prev;
};

class linked {
private:
	int N;
	node* head;
	node* tail;
public:
	linked() :N{ 0 }, head{ NULL }, tail{ NULL } {}
	void frontpop() {
		if (N == 0) {
			return;
		}
		node* old = head;
		head = head->next;
		delete old;
		N--;
	}
	void insertfront(int data) {
		node* newnode = new node;
		newnode->data = data;
		if (N == 0)
		{
			head = tail = newnode;
			N++;
			return;
		}
		newnode->next = head;
		head = newnode;
		N++;
	}
	int personnum() {
		if (N == 0) return -1;
		return head->data; }
	int size() { return N; }
};

int main() {
	int N; cin >> N;
	int e;

	int* list = new int[N];
	int min = 0;
	for (int i = 0; i < N; i++)
		list[i] = i + 1;
	linked arr;
	for (int i = 0; i < N; i++) {
		cin >> e;
		if (e == list[min])
		{
			min++;
			while (list[min] == arr.personnum() && arr.size() != 0) {
				arr.frontpop();
				min++;
			}
		}

		else
		{
			arr.insertfront(e);
		}
	}
	cout << (arr.size() == 0 ? "Nice" : "Sad");

}