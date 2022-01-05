#include <iostream>
using namespace std;
int g = 10;
extern int ga;
int a = 8;
extern int se;
extern void func();
extern "C" void c_func(); //c파일 함수 가져오려면 "C" 붙여야 한다
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

	//se = 900; 에러 발생
	//global static은 외부에서 참조 불가

	func();
	c_func();

	//memory가 아니라 register사용 가능하다
	register int i = 0;
	while (i < 1000000) {
		i++;
	}

	return 0;
}