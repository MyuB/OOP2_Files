#include <iostream>
using namespace std;

namespace Python {
	struct Info {
		string prof;
		int id;
	};
	float grade;
	void talk() {
		cout << "is python" << endl;
	}
}
namespace Cpp {
	class Info {
	public:
		string prof;
		int id;
	};
	float grade;
	void talk();
}

//float grade = 0.0f;

//using Cpp::talk;
//using Python::talk;
using namespace Cpp;
int main() {
	Info p1;
	p1.prof = "���°�";
	p1.id = 2020;
	talk();
	grade = 3.9f;
	//talk(); namespace ���� �ʿ�
	//Cpp::talk();
	//Python::talk();
	//float grade;
	//Cpp::grade = 4.5f;
	//::grade = 4.0f;
	//cout << ::grade << endl;
}
namespace Cpp {
	void talk() {
		cout << "is cpp" << endl;
	}
}