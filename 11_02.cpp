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
		cout << "����(main) = " << ex << '\n';
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
		cout << "����(a) = " << ex << '\n';
		throw; //���� �ٽ� ������
	}
	catch (...) { //�̰Ŵ� �׻� ��������
		cout << "��Ÿ ����\n";
	}
	
}
void B() {
	C();
}
void C() {
	throw 121;
}