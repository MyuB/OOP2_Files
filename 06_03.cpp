#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
#include <string>
#include "06_03_sub.h"
#define endl '\n'
using namespace std;

//함수가 정의된 파일이랑 헤더파일 이름이랑 맞춰야한다
//헤더파일에 공유될 함수의 프로토타입 작성해야한다
//불러올 파일에서 헤더를 include 해야한다

//int main() {
//	int r;
//	r = Plus(3, 7);
//	return 0;
//}

//int main() {
//	//null 값도 들어가야해서 9개까지밖에 못받음
//	char cstyle[10];
//	string cppstyle;
//
//	//cin >> cstyle;
//	//cin >> cppstyle;
//	cin.getline(cstyle, 10);
//	cin.clear();
//	getline(cin, cppstyle);
//
//	cout << cstyle << endl;
//	cout << cppstyle << endl;
//
//	return 0;
//}


//int main() {
//	//c to cpp
//	char cstyle[] = "Hi";
//	string cppstyle;
//
//	cppstyle = cstyle;
//	cppstyle[0] = 'h';
//
//	cout << cstyle << endl;
//	cout << cppstyle << endl;
//
//	//cpp to c
//	string cpp = "Hello";
//	const char* c = NULL; 
//	//readonly
//	c = cpp.c_str();
//	//새로운 메모리 주소에 카피
//	char* cc = new char[cpp.size() + 1];
//
//	strcpy(cc, cpp.c_str());
//	cc[0] = 'Y';
//	cout << cc << endl;
//
//	delete[] cc;
//	cc = NULL;
//
//	return 0;
//}