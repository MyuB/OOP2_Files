#include <iostream>
using namespace std;
int g = 10;
extern int ga;
int a = 8;
extern int se;
extern void func();
extern "C" void c_func(); //c���� �Լ� ���������� "C" �ٿ��� �Ѵ�
void test() {
	static int n = 0;
	cout << "static n" << n++ << endl;
	int l = 7;
	cout << "test l " << l << endl;
	cout << "global g " << g << endl;
	cout << "extern ga " << ga << endl;
}
int main() {
	int l = 5;
	int a = 9;
	cout << "main a " << a << endl;
	{
		cout << "main a " << a << endl;
		int a = 1;
		cout << "local a " << a << endl;
	}
	cout << "main a " << a << endl;
	cout << "main l " << l << endl;
	test();
	g++;
	cout << "global g " << g << endl;
	test();
	cout << "extern ga" << ga << endl;
	test();
	test();

	//se = 900; ���� �߻�
	//global static�� �ܺο��� ���� �Ұ�

	func();
	c_func();

	//memory�� �ƴ϶� register��� �����ϴ�
	register int i = 0;
	while (i < 1000000) {
		i++;
	}

	return 0;
}