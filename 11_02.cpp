#include <iostream>
using namespace std;

void A();
void B();
void C();

int main() {
	try
	{
		A();
	}
	catch (int ex)
	{
		cout << "예외(main) = " << ex << '\n';
	}
	return 0;
}

void A() {
	try
	{
		B();
	}
	catch (int ex)
	{
		cout << "예외(a) = " << ex << '\n';
		throw; //예외 다시 던지기
	}
	catch (...) { //이거는 항상 마지막에
		cout << "기타 예외\n";
	}
	
}
void B() {
	C();
}
void C() {
	throw 121;
}