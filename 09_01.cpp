#include <iostream>
using namespace std;

//4번
//Inha, Unha, Anha


//3번
//class Oop {
//public:
//	Oop() {
//		n++; cout << "o ";
//	}
//	Oop(const Oop& ) {
//		n++; cout << "c ";
//	}
//	~Oop() { n--; cout << "x "; }
//	static int n;
//	static void p() { cout << n << endl; }
//};
//int Oop::n = 0;
//void f() {
//	Oop d4;
//	Oop::p();
//}
//int main() {
//	Oop d1, d2;
//	Oop::p();
//	f();
//	Oop d3 = d1;
//	Oop::p();
//	return 0;
//}

//2번
//union inha {
//	int i;
//	short s[2];
//	char c;
//};
//
//void test(inha& un) {
//	cout << un.i << endl;
//	cout << un.c << endl;
//}
//
//bool isPositive(int n) {
//	cout << boolalpha;
//	return n > 0;
//}
//
//int main() {
//
//	inha un;
//	int a = 10;
//	un.i = 0x12345641;
//
//	cout << hex;
//	un.s[1] = (short)0x2021;
//	test(un);
//
//	cout << isPositive(-9.99) << endl;
//	cout << isPositive(7) << endl;
//
//	return 0;
//}

//1번
//int c(const char n[]) {
//	auto cnt = 0;
//	for (int i = 0; i < n[i] != '\0'; i++)
//		cnt++;
//	return cnt++;
//}
//int main() {
//	char a[] = "Inha Univ";
//	const char* b = "Summer School";
//	cout << c(a) << endl;
//	cout << c(b) << endl;
//}