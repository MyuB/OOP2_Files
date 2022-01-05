#include <iostream>
using namespace std;

class SmartPointer {
public:
	char* const ptr;
	SmartPointer(char* p) :ptr(p) {}
	~SmartPointer() {
		cout << "�Ҹ��� ����: �޸� ���� \n";
		delete[] ptr;
	}
};

void b() {
	throw "exception";
}

void a() {
	char* p = new char[100];
	SmartPointer sp(p);
	cout << "before exception\n";
	b();
	cout << "after exception\n";
	//memory leak
	/*delete[] p;
	p = NULL;*/
}

int main() {
	try
	{
		a();
	}
	catch (const char* ex)
	{
		cout << "exception caugth : " << ex << '\n';
	}

	return 0;
}