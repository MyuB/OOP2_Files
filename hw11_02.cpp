#include <iostream>
#include <memory>
#define endl '\n'
using namespace std;

/*
unique_ptr 방법을 사용하였다
이 방식은 객체의 유일성을 보장해줘야 하기 때문에 할당이 불가능하다
즉, 각각 새로운 객체를 생성해야 한다
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
		unique_ptr<Hero> h1(new Hero(1));
		h1->PrintHero();
		unique_ptr<Hero> h2(new Hero(1));
		h2->setName("ripper");
		h2->PrintHero();

		h1->setName("lineharte");
		cout << endl;
		h1->setId(2);
		h1->PrintHero();
		h2->PrintHero();
		cout << h2->getName() << endl;
	}
	catch (...) {
		cout << "exception" << endl;
	}
	return 0;
}