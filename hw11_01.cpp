#include <iostream>
#define endl '\n'
using namespace std;

/*
���� �� �ڵ��� �������� ��ü�� ���ԵǾ� ���ư��⶧���� ������ �����.
��ü�� ���ԵǾ� ���� h2���� id�� delete�Ǿ��� �� h1�� id�� ���� �����ǹǷ� id�� �ι� delete�� �Ǵµ� �̴� �翬�� ������ �ҷ�����Ų��
*/

class Hero {
public:
	Hero(int m) {
		cout << "constructor\n";
		id = new int;
		*id = m;
		name = "no name";
	}
	int getId() const { return *id; }
	void setId(int m) {
		cout << "setter set Id" << endl;
		*id = m;
	}
	string getName() const { return name; }
	void setName(const string& _name) {
		cout << "setter set Name" << endl;
		this->name = _name;
	}
	void PrintHero() {
		cout << this->name << " : " << *(this->id) << endl;
	}
	~Hero() {
		cout << "destroyer" << endl;
		delete id;
	}
private:
	int* id;
	string name;
};

int main() {
	try {
		Hero h1(1);
		h1.PrintHero();
		Hero h2(h1);
		h2.setName("ripper");
		h2.PrintHero();

		h1.setName("lineharte");
		cout << endl;
		h1.setId(2);
		h1.PrintHero();
		h2.PrintHero();
		cout << h2.getName() << endl;
	}
	catch (...) {
		cout << "exception" << endl;
	}
	return 0;
}