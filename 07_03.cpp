#include <iostream>
using namespace std;

class Student {
private:
	int id;
	//�ٵ� �� �� mutable�� �� const�� �� �� �ְ� �����
	//mutable int id;
public:
	Student() {
		id = 10;
	}
	int getId() const {
		//id = 99; �ʵ��� ���� ���� ������ ���´� �׷��� setter������ ������� �ʴ´�
		return id;
	}
};

int main() {

	

	return 0;
}