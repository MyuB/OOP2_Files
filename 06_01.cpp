#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
using namespace std;

//int main() {
//	char src[] = "Inha Univ";
//	int len = strlen(src);
//	cout << len << '\n';
//
//	char* dest = new char[len + 1];
//	strcpy(dest, src);
//	cout << src << endl;
//	cout << dest << endl;
//
//	delete[] dest;
//	dest = NULL;
//
//	return 0;
//}

//char* ReverseString(const char* src, int len) {
//	char* rev = new char[len + 1];
//	for (auto i = 0; i < len; i++)
//		rev[i] = src[len - i - 1];
//	rev[len] = NULL;
//	return rev;
//}
//
//int main() {
//	char orig[] = "inha";
//	char* copy = ReverseString(orig, 4);
//	cout << orig << '\n';
//	cout << copy << '\n';
//	delete[] copy;
//	copy = NULL;
//	return 0;
//}