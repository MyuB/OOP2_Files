#include <iostream>
#include <string>
using namespace std;

void setOrder(string *na, int *tm, string n, int t) {
	bool set = false;
	for (size_t i = 0; i < 5; i++) {
		if (tm[i] <= 0) {
			tm[i] = t;
			na[i] = n;
			cout << "No. " << i + 1 << " " << n << " " << t << " minutes" << '\n';
			set = true;
			break;
		}
	}
	if (set == false)
		cout << "Please wait and reOrder\n";
}

int main() {
	enum menu{coffee=2, chocolate=7, waffle=5};
	string name[5] = { "coffee", "chocolate", "wawffle", "", "" };
	int time[5] = { coffee, chocolate, waffle, -1, -1 };

	for (int i = 0; i <= 10; i++) {
		for (int& r : time) {
			r -= 1;
		}

		cout << i << " minutes after" << '\n';
		cout << "Finished: ";
		int count = 0;
		for (int n : time) {
			if (n == 0) {
				cout << "No. " << count + 1 << " " << name[count] << " ";
			}
			count++;
		}
		cout << endl;

		int order;
		cout << "Order (1. coffee, 2. chocolate, 3. waffle): ";
		cin >> order;
		switch (order)
		{
		case 1:
			setOrder(name, time, "coffee", coffee);
			break;
		case 2:
			setOrder(name, time, "chocolate", chocolate);
			break;
		case 3:
			setOrder(name, time, "waffle", waffle);
			break;
		default:
			cout << "wrong input\n";
			break;
		}
		cout << '\n';
	}

	return 0;
}