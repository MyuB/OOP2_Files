#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Vote {
private:
	double ratio = 0;
	int count = 0;
	string name;
public:
	Vote(string _name)
		:name(_name) {}
	void incrementCount() {
		this->count++;
	}
	double getRatio() {
		return this->ratio;
	}
	string getName() {
		return this->name;
	}
	void computeRatio(int _num) {
		ratio = (count /(double)_num) * 100;
	}
	void printInfor() {
		cout << setprecision(3);
		cout << this->name << setw(8) << this->ratio << " ";
		for (int i = 0; i < this->count; i++) cout << "*";
		cout << '\n';
	}
};

int main() {

	int voteCount = 0;
	Vote v1("skt"), v2("kt");
	
	while (true) {
		
		cout << "1. skt vs 2. kt " << '\n';
		cout << "? ";
		int v;
		cin >> v;

		if (v == -1) break;
		voteCount++;
		if (v == 1 || v == 2) {
			if (v == 1) {
				v1.incrementCount();
			}
			else
				v2.incrementCount();
		}
		else {
			cout << "wrong input" << '\n';
			continue;
		}
	}
	v1.computeRatio(voteCount);
	v2.computeRatio(voteCount);

	v1.printInfor();
	v2.printInfor();

	return 0;
}