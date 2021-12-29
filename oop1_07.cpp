#include <iostream>
#include "Character.h"
using namespace std;

int main() {
	Character iu{ 20 };
	iu.display();
	cout << iu.useSkill() << endl;
	iu.changeMode();
	cout << iu.useSkill() << endl;

	return 0;
}