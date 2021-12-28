#include <iostream>
using namespace std;

union JobUnion {
	//가장 큰 멤버변수의 크기로 메모리가 할당된다
	char name[32];
	float salary;
	int workerId;
}uJob;

struct JobStruct {
	char name[32];
	float salary;
	int workerId;
}sJob;

int main() {

	cout << sizeof(uJob) << '\n';
	cout << sizeof(sJob) << '\n';

	return 0;
}

//struct LinkedList {
//	int data;
//	LinkedList* ptr;
//};
//
//int main() {
//
//	LinkedList a, b, c;
//	a.data = 99;
//	a.ptr = &b;
//	b.data = 93;
//	b.ptr = &c;
//	c.data = 94;
//	c.ptr = &a;
//
//	/*cout << b.data << '\n';
//	cout << a.ptr->data << '\n';*/
//
//	cout << c.data << '\n';
//	cout << b.ptr->data << '\n';
//	cout << (*b.ptr).data << '\n';
//	cout << a.ptr->ptr->data << '\n';
//	cout << (*(*a.ptr).ptr).data << '\n';
//	cout << c.ptr->ptr->ptr->data << '\n';
//
//	return 0;
//}