#include <iostream>
#include <memory>
using namespace std;

class Test {
	int* data;
public:
	Test() {
		cout << "������" << endl;
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
	//���� �ڵ�
	//Test* t1 = new Test();
	//Test* t2 = t1;
	//delete t1;
	//delete t2;

	//unique_ptr<Test> up(new Test()); //������ auto_ptr�� ���� ��ü
	//up->t();

	unique_ptr<Test> up1(new Test());
	//Test* up1 = new Test();
	//�̷��� �Ҵ� x
	//unique_ptr<Test> up2 = up1;
	
}
int main() {
	testing();

	return 0;
}