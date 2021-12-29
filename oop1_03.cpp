#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class HeadPhone {
private:
	string name;
	string color;
	int serial;
public:
	HeadPhone(string _name, int _serial)
		:name{ _name }, serial{ _serial } {
		setColor();
	}
	void setColor();
	string getName();
	int getSerial();
	string getColor();
};

void HeadPhone::setColor() {
	if (this->serial % 2 == 0) this->color = "black";
	else this->color = "white";
}
string HeadPhone::getName() {
	return this->name;
}
int HeadPhone::getSerial() {
	return this->serial;
}
string HeadPhone::getColor() {
	return this->color;
}


int main() {
	
	string s;

	cout << "name: ";
	getline(cin, s);
	HeadPhone h1(s, 1000000);
	h1.setColor();
	

	cout << "name: ";
	getline(cin, s);
	HeadPhone h2(s, h1.getSerial() + 1);
	h2.setColor();
	
	cout << "name: ";
	getline(cin, s);
	HeadPhone h3(s, h2.getSerial() + 1);
	h3.setColor();

	cout << h1.getSerial() << setw(2) << h1.getName() << '\t' << h1.getColor() << '\n';
	cout <<  h2.getSerial() << setw(2) << h2.getName() << '\t' << h2.getColor() << '\n';
	cout <<  h3.getSerial() << setw(2) << h3.getName() << '\t' << h3.getColor() << '\n';


	return 0;
}