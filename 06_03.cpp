#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
#include <string>
#include "06_03_sub.h"
#define endl '\n'
using namespace std;

//�Լ��� ���ǵ� �����̶� ������� �̸��̶� ������Ѵ�
//������Ͽ� ������ �Լ��� ������Ÿ�� �ۼ��ؾ��Ѵ�
//�ҷ��� ���Ͽ��� ����� include �ؾ��Ѵ�

//int main() {
//	int r;
//	r = Plus(3, 7);
//	return 0;
//}

//int main() {
//	//null ���� �����ؼ� 9�������ۿ� ������
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
//	//���ο� �޸� �ּҿ� ī��
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