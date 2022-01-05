#include <iostream>
using namespace std;

class Student {
public:
	//기업에 따라 변수 앞에 m을 붙여서 사용할 수 있다.
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
//전역 변수는 밖에서 초기화 해줘야한다
int Student::student_count = 0;
void Student::PrintStdCount() {
	cout << "Student 객체 수 = " << student_count << '\n';
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
	//this 는 현재 실행 시점의 객체의 주소를 가지고 있다
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
	Student std1("김인하", 20191234);
	Student std2("박인하", 20194321);

	Student::PrintStdCount();
}

int main() {
	Student::PrintStdCount();
	Student std("최인하", 20211234); //param
	//이건 호출 자체는 되지만 생성은 되지는 않음
	//Student s();
	//이건 기본 생성자가 꼭 필요하다
	Student s; //default

	Student temp(std); //copy
	Student t();
	//Student temp = std; //copy
	Student* std4 = new Student("폰인하", 1000);
	
	Student::PrintStdCount();
	cout << temp.mName << temp.sNo << endl;
	delete std4;
	std4 = NULL;
	Func();
	Student::PrintStdCount();

	return 0;
}