#include <iostream>
using namespace std;

struct Student {
	int id;
	float grade;
	char bloodType;
}s3 = {12414314, 4.4f, 'b'};

int main() {

	int a = 10;
	int b = 0xa;
	int c = 012;
	int d = 0b1010; //binary literal c++ 14 ver
	cout << a << ' ' << b << ' ' << c << " " << d << '\n';

	//struct
	Student s1 = { 12183443, 3.5f, 'o' };
	Student s2 = { 12183434, 3.6f, 'a' };

	cout << s1.id << endl;
	cout << s2.id << endl;
	cout << s3.bloodType << endl;


	//modern
	char sa[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
	void* pa;
	pa = sa;

	for (auto i : sa)
		cout << i;


	//old version
	//char sa[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
	//void* pa;
	//pa = sa;
	//cout << (char*)pa << '\n';
	//cout << sa << '\n';
	//for (int i = 0; i < sizeof(sa); i++) {
	//	cout << *((char*)pa + i);
	//}



	return 0;
}