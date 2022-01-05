#include <iostream>
#include <string>
using namespace std;

class intNode {
private:
	int dat;
	intNode* next;

	intNode(int x) {
		this->dat = x;
		this->next = NULL;
	}

	friend class intLinkedList;
};

class intLinkedList {
private:
	intNode* head;
	intNode* tail;
public:

	intLinkedList()
		:head(NULL), tail(NULL) {
	}

	~intLinkedList() {}

	void addFront(int x) {
		intNode* n = new intNode(x);
		if (empty()) {
			head = n;
			tail = n;
		}
		else {
			n->dat = x;
			n->next = head;
			head = n;
		}
	}

	void removeFront() {
		if (empty()) {
			cout << -1 << "\n";
		}
		else {
			intNode* old = head;
			head = old->next;
			cout << old->dat << "\n";
			delete old;
			if (head == NULL) {
				tail = NULL;
			}
		}
	}

	void front() {
		if (empty()) {
			cout << -1 << "\n";
		}
		else {
			cout << head->dat << "\n";
		}
	}

	int empty() {
		if (head == NULL && tail == NULL) {
			return 1;
		}
		else {
			return 0;
		}
	}

	void showList() {
		if (empty()) {
			cout << -1 << "\n";
		}
		else {
			intNode* n = head;
			while (n != tail) {
				cout << n->dat << " ";
				n = n->next;
			}
			cout << tail->dat << "\n";
		}
	}

	void addBack(int x) {
		intNode* n = new intNode(x);
		if (empty()) {
			head = n;
			tail = n;
		}
		else {
			tail->next = n;
			tail = n;
		}
	}
};


int main() {

	int n, x;
	string s;
	intLinkedList ll;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "addFront") {
			cin >> x;
			ll.addFront(x);
		}
		else if (s == "removeFront") {
			ll.removeFront();
		}
		else if (s == "front") {
			ll.front();
		}
		else if (s == "empty") {
			cout << ll.empty() << "\n";
		}
		else if (s == "showList") {
			ll.showList();
		}
		else if (s == "addBack") {
			cin >> x;
			ll.addBack(x);
		}
	}


	return 0;
}