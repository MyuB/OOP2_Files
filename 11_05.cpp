#include <iostream>
#include <memory>
using namespace std;

class Test {
	int* data;
public:
	Test() {
		cout << "생성자" << endl;
		data = new int[100];
	}
	~Test() {
		cout << "destroy" << endl;
		delete[] data;
	}
	void t() {
		cout << "on test...." << endl;
	}
};
void testing() {
	//문제 코드
	//Test* t1 = new Test();
	//Test* t2 = t1;
	//delete t1;
	//delete t2;

	//unique_ptr<Test> up(new Test()); //기존의 auto_ptr을 보완 대체
	//up->t();

	unique_ptr<Test> up1(new Test());
	//Test* up1 = new Test();
	//이렇게 할당 x
	//unique_ptr<Test> up2 = up1;
	
}
int main() {
	testing();

	return 0;
}