#include <iostream>
using namespace std;
//oop1 review
int main() {

	auto f = 3.24;
	auto s = "test";

	// vs 에서 포인터는 4바이트임 ㅇㅇ
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
	// void pointer는 출력 시 casting 해줘야한다

	//char sa[] = "hell"; //이 문자 마지막에는 '\0'이라는 null문자가 들어간다
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