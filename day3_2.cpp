#include <iostream>
#include <string>
using namespace std;

class Node {
private:
	int dat;
	Node* next;

	Node(int x) {
		this->dat = x;
		this->next = NULL;
	}

	friend class cirLinkedList;
};

class cirLinkedList {
private:
	Node* head;
	Node* tail;
public:

	cirLinkedList()
		:head(NULL), tail(NULL) {
	}

	~cirLinkedList() {}

	void Delete(int order) {
		Node* cursor = head;
		if (order == 0) {
			head = cursor->next;
			tail->next = head;
			delete cursor;
		}
		else {
			for (int i = 0; i < order - 1; i++) {
				cursor = cursor->next;
			}
			Node* old = cursor->next;
			cursor->next = old->next;
			if (old == head) {
				head = old->next;
			}
			if (old == tail) {
				tail = cursor;
				cursor->next = head;
			}
			delete old;
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
			Node* n = head;
			while (n != tail) {
				cout << n->dat << " ";
				n = n->next;
			}
			cout << tail->dat << "\n";
		}
	}

	void addBack(int x) {
		Node* n = new Node(x);
		if (empty()) {
			head = n;
			tail = n;
		}
		else {
			tail->next = n;
			n->next = head;
			tail = n;
		}
	}
};

int main() {
	int n, x;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cirLinkedList cll;
		for (int k = 0; k < 10; k++) {
			cin >> x;
			cll.addBack(x);
		}
		for (int j = 0; j < 3; j++) {
			string d;
			cin >> d;
			if (d == "Delete") {
				int order;
				cin >> order;
				cll.Delete(order);
			}
		}
		cll.showList();
	}
}