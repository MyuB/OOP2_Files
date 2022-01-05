#include <iostream>
#define endl '\n'
using namespace std;

/*
현재 이 코드의 문제점은 객체가 대입되어 돌아가기때문에 문제가 생겼다.
객체가 대입되어 먼저 h2에서 id가 delete되었을 떄 h1의 id도 같이 삭제되므로 id가 두번 delete가 되는데 이는 당연히 에러를 불러일으킨다
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