#include <iostream>
#include <string>
#include "test.h"
using namespace std;

int main() {
	Test aa;
	cout << aa.a++ << endl;
	cout << aa.a;
	return 0;
}

//inline void Test() {
//	cout << "1" << endl;
//	cout << "2" << endl;
//	cout << "3" << endl;
//}
//int main() {
//	Test();
//	return 0;
//}
//�������� �̰Ŷ� �Ȱ���
//int main() {
//	cout << "1" << endl;
//	cout << "2" << endl;
//	cout << "3" << endl;
//	return 0;
//}

//�������: ��� ��ü�� �����ϴ� ���
//class Student {
//public:
//	string name;
//	int sNo;
//
//	Student(const string& name_arg, int stdNumber);
//	~Student();
//public:
//	static int student_count;
//	static void PrintStdCount();
//};
//int Student::student_count = 0;
//void Student::PrintStdCount() {
//	cout << "Student ��ü �� = " << student_count << '\n';
//}
//Student::Student(const string& name_arg, int stdNumber) {
//	student_count++;
//
//	this->name = name_arg;
//	this->sNo = stdNumber;
//}
//Student::~Student() {
//	student_count--;
//}
//void Func() {
//	Student std1("������", 20191234);
//	Student std2("������", 20194321);
//
//	Student::PrintStdCount();
//}
//int main() {
//	Student::PrintStdCount();
//	Student std("������", 20211234);
//	Student::PrintStdCount();
//	Func();
//	Student::PrintStdCount();
//
//	return 0;
//}


//���� ����
//class AccessControl {
//public:
//	char publicData;
//	void publicFunc() {};
//protected:
//	int protectedData;
//	void protectedFunc() {};
//private:
//	float privateData;
//	void privateFunc() {};
//public:
//	void AccessAllMembers();
//};
//void AccessControl::AccessAllMembers() {
//	publicData = 'A';
//	publicFunc();
//	protectedData = 100;
//	protectedFunc();
//	privateData = 4.5f;
//	privateFunc();
//}
//
//int main() {
//	AccessControl ac;
//
//	ac.publicData = 'A';
//	ac.publicFunc();
//	/*ac.protectedData = 100;
//	ac.protectedFunc();
//	ac.privateData = 4.5f;
//	ac.privateFunc();*/
//}