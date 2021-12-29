#include <iostream>
#include <string>
using namespace std;

class Vote {
private:
	int count = 0;
	string name;
public:
	Vote(string _name)
		:name(_name) {

	}
	void incrementCount() {
		this->count++;
	}
	int getCount() {
		return this->count;
	}
	string getName() {
		return this->name;
	}
};


int main() {

	Vote v1("skt"), v2("kt");

	int vote = 0;
	while (vote != 10) {
		cout << "1. skt vs 2. kt " << '\n';
		cout << "? ";
		int v;
		cin >> v;
		if (v == 1) v1.incrementCount();
		else if (v == 2) v2.incrementCount();
		else continue;

		vote++;
	}

	cout << v1.getName() << ": " << v1.getCount() << '\n';
	cout << v2.getName() << ": " << v2.getCount() << '\n';
	if (v1.getCount() == v2.getCount()) cout << "Draw!";
	else if (v1.getCount() > v2.getCount()) cout << v1.getName() << "win!";
	else cout << v2.getName() << "win!";
	

	return 0;
}