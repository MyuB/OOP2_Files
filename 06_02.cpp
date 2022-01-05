#pragma warning(disable:4996)
#include <iostream>
#include <string>
#include <cstring>
#define endl '\n'
using namespace std;

int main() {

	char str1[30] = "Inha";
	char str2[] = "Aju";

	if (strcmp(str1, str2) == 0) cout << "같다" << endl;
	else {
		cout << "다르다" << endl;
		//특이한게 비교할때 I H 는 1 I J 는 -1을 return ascii 코드값으로 비교하는듯
		//ascii str1 < str2 -1 return, str1 > str2 1 return
		cout << strcmp(str1, str2) << endl;
	}

	strcat(str1, str2);
	cout << str1 << endl;
	cout << str2 << endl;

	

	string src = "Inha Univ";
	string dest;

	//string 객체의 멤버함수 호출
	cout << src.size() << endl;

	dest = src;

	cout << src << endl;
	cout << dest << endl;

	string s1 = "Inha";
	string s2 = "Univ";

	if (str1 == str2) cout << "같다" << endl;
	else {
		cout << "다르다" << endl;
		cout << (str1 == str2) << endl;
	}

	s1 += s2;
	cout << s1 << endl;
	cout << s2 << endl;

	string s3 = "Hi, Inha Univ";
	cout << s3.find("Nover") << endl;
	string capture = s3.substr(4, 4);
	cout << capture << endl;

	return 0;
}