#include <iostream>
using namespace std;

class Student {
public:
	//����� ���� ���� �տ� m�� �ٿ��� ����� �� �ִ�.
	string mName;
	int sNo;

	Student();
	Student(const string& name_arg, int stdNumber);
	Student(const Student& s);
	~Student();
public:
	static int student_count;
	static void PrintStdCount();
};
//���� ������ �ۿ��� �ʱ�ȭ ������Ѵ�
int Student::student_count = 0;
void Student::PrintStdCount() {
	cout << "Student ��ü �� = " << student_count << '\n';
}
//default constructor
Student::Student() {
	student_count++;
	this->mName = "noname";
	this->sNo = 00000000;
}
//parameter constructor
Student::Student(const string& name_arg, int stdNumber) {
	student_count++;
	//this �� ���� ���� ������ ��ü�� �ּҸ� ������ �ִ�
	this->mName = name_arg;
	this->sNo = stdNumber;
}
Student::Student(const Student& s)
	:mName(s.mName), sNo(s.sNo){
	student_count++;
}
//destroyer
Student::~Student() {
	student_count--;
}

void Func() {
	Student std1("������", 20191234);
	Student std2("������", 20194321);

	Student::PrintStdCount();
}

int main() {
	Student::PrintStdCount();
	Student std("������", 20211234); //param
	//�̰� ȣ�� ��ü�� ������ ������ ������ ����
	//Student s();
	//�̰� �⺻ �����ڰ� �� �ʿ��ϴ�
	Student s; //default

	Student temp(std); //copy
	Student t();
	//Student temp = std; //copy
	Student* std4 = new Student("������", 1000);
	
	Student::PrintStdCount();
	cout << temp.mName << temp.sNo << endl;
	delete std4;
	std4 = NULL;
	Func();
	Student::PrintStdCount();

	return 0;
}