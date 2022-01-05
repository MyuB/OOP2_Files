#include <iostream>
using namespace std;

class Student {
private:
	int id;
	//근데 또 이 mutable은 또 const를 깰 수 있게 만든다
	//mutable int id;
public:
	Student() {
		id = 10;
	}
	int getId() const {
		//id = 99; 필드의 값에 대한 변경을 막는다 그래서 setter에서는 사용하지 않는다
		return id;
	}
};

int main() {

	

	return 0;
}