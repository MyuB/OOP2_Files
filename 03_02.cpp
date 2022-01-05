#include <iostream>
#include <limits.h>
using namespace std;

//int main() {
//
//	//short a = 32767;
//	unsigned short a = 65535; 
//	//여기서 casting이 일어나서 65536이 출력된다
//	cout << a + 1<< '\n';
//
//	unsigned long b = ULONG_MAX;
//	cout << b + 1 << '\n';
//
//	char c = 'B';
//	cout << c << '\n';
//	//여기서도 casting 이 되어버린다
//	cout << char(c-0) << '\n';
//	cout << static_cast<char>(c - 0) << '\n';
//	cout << (char)(c - 0) << '\n';
//	return 0;
//
//}

//int a() {
//	return puts("a");
//}int b() {
//	return puts("b");
//}int c() {
//	return puts("c");
//}
//void z(int, int, int) {};
//int main() {
//	z(a(), b(), c());
//	return a() + b() + c();
//}


//int main() {
//
//	int matrix[3][4] = {
//		{1, 2, 3, 4},
//		{5, 6, 7, 8},
//		{9, 10, 11, 12}
//	};
//
//	int a = 5;
//	int* pa = &a;
//	int** ppa = &pa;
//
//	cout << **ppa << " " << *pa << " " << a << '\n';
//	cout << *ppa << " " << pa << " " << &a << '\n';
//
//	return 0;
//}

int matrix[3][4] = {
			{1, 2, 3, 4},
			{5, 6, 7, 8},
			{9, 10, 11, 12} 
};

int main() {
	int* ptr = matrix[0];
	for (int i = 0; i < 12; i++) {
		cout << ptr[i] << ' ';
	}
}

//void print(int (*pm)[4], int rows) {
//	for (int i = 0; i < rows; i++) {
//		for (int j = 0; j < 4; j++) {
//			cout << pm[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//}
//
//int main() {
//
//	int matrix[3][4] = {
//		{1, 2, 3, 4},
//		{5, 6, 7, 8},
//		{9, 10, 11, 12}
//	};
//
//	print(matrix, 3);
//	
//	return 0;
//}