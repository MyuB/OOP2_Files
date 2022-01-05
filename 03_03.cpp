#include <iostream>
#include <string>
using namespace std;

//struct Soldier {
//	int id;
//	string name;
//	string grade;
//}s2 = { 200, "성윤모", "이병" };
//
//int main() {
//	Soldier s1{ 100, "박민석", "일병" };
//	Soldier s3 = s1;
//	cout << s2.id << " " << s2.name << " " << s2.grade << '\n';
//	s3.id = 400;
//	cout << s3.id << " " << s3.name << " " << s3.grade << '\n';
//	cout << s1.id << '\n';
//	cout << &s3 << endl;
//	cout << &s1 << endl;
//
//	return 0;
//}

//int main() {
//	int numbers[] = { 2, 99,13,5 };
//	int result = 0;
//	for (auto num : numbers)
//		result += num;
//	cout << result << '\n';
//}

//int main() {
//
//	char c = 'A';
//
//	void* pv = &c;
//	//char* pc;
//	//pc = &c;
//
//	//cout << *(char*)(pv) << '\n';
//	cout << *static_cast<char*>(pv) << '\n';
//
//	return 0;
//}

//int main() {
//
//	int arr[3] = { 9, 3, -7 };
//
//	for (int a : arr) {
//		cout << a << ' ';
//		a = 9;
//	}
//	//이렇게 하면 값이 바뀌지 않는다
//	for (int a : arr) {
//		cout << a << ' ';
//		a = 9;
//	}
//	//주소를 참조하게 되는것
//	for (int &a : arr) {
//		cout << a << ' ';
//		a = 9;
//	}
//	//이렇게 하면 값이 바뀐다
//	for (int a : arr) {
//		cout << a << ' ';
//		a = 9;
//	}
//	
//	for (int i = 0; i < 3; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << '\n';
//
//	return 0;
//}