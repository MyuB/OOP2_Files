#include <iostream>
using namespace std;
//oop1 review
int main() {

	auto f = 3.24;
	auto s = "test";

	// vs ���� �����ʹ� 4����Ʈ�� ����
	cout << sizeof(f) << '\t' << typeid(f).name() << '\n';
	cout << sizeof(s) << '\t' << typeid(s).name() << '\n';

	short a = 2;
	double b = 3.14;
	short* ps;
	void* pv;
	ps = &a;
	pv = &a;
	cout << *ps << '\n';
	cout << *(short*)pv << '\n';
	pv = &b;
	cout << *(double*)pv << '\n';
	// void pointer�� ��� �� casting ������Ѵ�

	//char sa[] = "hell"; //�� ���� ���������� '\0'�̶�� null���ڰ� ����
	char sa[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
	void* pa;
	pa = sa;
	cout << (char*)pa << '\n';
	cout << sa << '\n';
	for (int i = 0; i < sizeof(sa); i++) {
		cout << *((char*)pa + i);
	}

	return 0;
}